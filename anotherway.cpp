#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int count=0,i;
    for( i=0;i<26;i++)
    {
        if(s[i]>0)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
