#include<bits/stdc++.h>
using namespace std;
vector<int>v;
string s;
int main(){
    cin>>s;
    //Op��o 1
    for(int i=0;i<s.size();i++)v.push_back((s.at(i) - 48));
    sort(v.begin(),v.end());
    vector<int>::reverse_iterator it;
    for(it=v.rbegin();it!=v.rend();it++)cout << *it;

    //Op��o 2
//    for(auto x:s)v.push_back(x-48);
//    sort(v.begin(),v.end());
//    for(auto x:v)cout << x;
}

