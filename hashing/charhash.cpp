#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
//here we we use ascii code of chars to reference them in hashing array
    vector<int> hash(256, 0);
    string s,q;
    cin >> s;
    for (char c : s) {
        hash[c]++;
    }
    cout<<"enter query string:";
    cin>>q;
    sort(q.begin(), q.end());
    for (int i = 0; i < 256; i++) {
        if(hash[q[i]]!=0)
        {
            cout << q[i] << " is present " << hash[q[i]] << " times" << endl;
            
        
        }
     

    }
return 0;
}