#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<iomanip>
#include<vector>
using namespace std;
void ID()
{
    cout<< "Jewel Nath" <<endl;
    cout<< "ID - 11909037" <<endl;
    cout<< "Program - 14" <<endl<<endl;
}


int main()
{
    ID();
    string fileName;
    cout<< "Enter your File Name" <<endl;
    cout<< "Example : myfile.txt" <<endl;
    getline(cin, fileName);
    ifstream infile;
    infile.open(fileName);
    if(infile.fail())
    {
        cout<< "Your file didn't work" <<endl;
        cout<< "Enter a valid file" <<endl;
    }
    else
    {
       vector<string>str;
       string s;
       while(getline(infile, s))
       {
           str.push_back(s);
       }
       cout<<"Your full file --"<<endl;
       for(auto it : str)
            cout<<it<<endl;
    }
    infile.close();
    return 0;
}
/*
Sample Input :
file.txt

Sample Output :

*/




