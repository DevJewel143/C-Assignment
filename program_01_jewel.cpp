#include<iostream>
#include<string>
using namespace std;
void ID()
{
    cout<< "Jewel Nath" <<endl;
    cout<< "ID - 11909037" <<endl;
    cout<< "Program - 01" <<endl;
}
int main()
{
    ID();
    int first_element,  second_element,  third_element,  last_element,  common_difference,  num_of_element;
    long long int  sum;
    string  Plus,  dot_dot;
    cout<< "Enter a Arithmetic Series" <<endl;
    cout<< "First_element + Second_element + Third_element + ........... + Last_element" <<endl;
    cin>> first_element >> Plus >> second_element >>  Plus >>  third_element >> Plus >> dot_dot >> Plus >> last_element;
    common_difference = second_element - first_element;
    num_of_element = (last_element - first_element)/common_difference + 1;

    sum = num_of_element*(2*first_element + (num_of_element-1)*common_difference)/2;
    cout<< "Sum of this series = " << sum <<endl;
    return 0;
}
/*
Sample Input :
Enter a Arithmetic Series
First_element + Second_element + Third_element + ........... + Last_element
1 + 4 + 7 + ....... + 13

Sample Output :
Sum of this series = 35
*/
