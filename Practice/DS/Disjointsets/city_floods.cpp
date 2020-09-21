#include <bits/stdc++.h>
using namespace std;
int par[10001];
int find(int a){
    if (par[a] == -1 ){
        return a;
    }
    return par[a]= find(par[a]);
}
void merge(int a, int b){
    a = find(a);
    b = find(b);
    if(a==b){
        return;
    }
    par[a] = b;
}
int main(){
    int n, k, a, b;
    cin>>n;
    for(int i=1; i<=n; i++){
        par[i]=-1;
    }
    cin>>k;
    while(k--){
        cin>>a>>b;
        merge(a,b);
    }    
    int res = 0;
    for(int i=1; i<=n; i++){
        if(par[i] ==-1){
            res++;
        }
    }
    cout<<res;
    return 0;
    
}
