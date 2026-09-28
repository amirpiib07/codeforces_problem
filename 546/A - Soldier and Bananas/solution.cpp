#include<bits\stdc++.h>
using namespace std;
 
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int cost=0;
    while(w!=0){
        cost+=w*k;
        w--;
    }
    if(n>=cost) cout<<0;
    else cout<<cost-n;
    return 0; 
}