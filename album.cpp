#include<bits/stdc++.h>
using namespace std;
set<int>l;
int main(){
    int m,n;
    cin >> m;
    cin >> n;
    for(int i=0; i<n; i++){
        int aux;
        cin >> aux;
        l.insert(aux);
    }
    cout << m - l.size();
}
