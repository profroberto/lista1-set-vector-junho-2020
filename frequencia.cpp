#include <bits/stdc++.h>
using namespace std;
int n;
vector<int>v(101,-1);
set<int>l;
//pair<set<int>::iterator,bool> ret;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        int aux;
        cin>>aux;
        l.insert(aux);
        if(v[aux]==-1)v[aux]=1;
        else v[aux]++;
    }
    set<int>::iterator it;
    for(it=l.begin();it!=l.end();it++) cout<<*it<<" "<<v[*it]<<endl;
}
