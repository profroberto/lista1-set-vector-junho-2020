#include <bits/stdc++.h>
using namespace std;
vector<int> v(101,-1);
set<int>l;
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int aux;
        cin >> aux;
        l.insert(aux);
        if(v.at(aux)==-1)v.at(aux)=1;
        else v.at(aux)++;
    }
    set<int>::iterator it;
    for(it=l.begin();it!=l.end();it++) cout<<*it<<" "<<v.at(*it)<<endl;
}
