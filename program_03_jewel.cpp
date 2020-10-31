#include<iostream>
#include<string>
#include<sstream>
using namespace std;
void ID()
{
    cout<< "Jewel Nath" <<endl;
    cout<< "ID - 11909037" <<endl;
    cout<< "Program - 03" <<endl<<endl;
}


int main()
{
    ID();
    string str;
    getline(cin, str);
    string temp, concate_str="";
    int digit_sum = 0;
    for(int i=0; i<str.size(); i++)
    {
        if(isdigit(str[i]))
        {
            temp = "";
            while(i<str.size() && isdigit(str[i]))
            {
                temp += str[i++];
            }
            int digit = 0;
            stringstream ss(temp);
            ss >> digit;
            digit_sum += digit;
        }
        else
        {
            if(str[i] != ' ')
                concate_str += str[i];
        }
    }
    cout<<"Main string = "<<str<<endl;
    cout<<"Total sum of all numbers = "<<digit_sum<<endl;
    cout<<"Concatenation all string = "<<concate_str<<endl;
    return 0;
}
/*
Sample Input :
Jewel 11909000 Nath 30 ID 7

Sample Output :
Main string = Jewel 11909000 Nath 30 ID 7
Total sum of all numbers = 11909037
Concatenation all string = JewelNathID
*/

