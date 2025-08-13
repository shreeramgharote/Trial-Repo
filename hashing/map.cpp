#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<char,int> m;
string s;char a;
cin >> s;
for(int i = 0; i < s.length(); i++)
{
    m[s[i]]++;
}
cout<<"query character: ";
cin>>a;
cout<<"frequency of "<<a<<" is "<<m[a]<<endl;
cout<<"all characters and their frequencies:"<<endl;    
for(auto it = m.begin(); it != m.end(); it++)
{
    cout << it->first << " : " << it->second << endl;
}
return 0;
}