#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    string ch,ch1;
    getline(cin,ch);
    getline(cin,ch1);
    transform(ch.begin(),ch.end(),ch.begin(),::tolower);
    transform(ch1.begin(),ch1.end(),ch1.begin(),::tolower);
    if(ch<ch1)
        cout<<"-1"<<endl;
    else if (ch>ch1)
        cout<<"1"<<endl;
        else
            cout<<"0"<<endl;

}
