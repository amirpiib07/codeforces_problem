#include <bits\stdc++.h>
using namespace std;
 
int main(){
    int a, b;
    cin>>a>>b;
    int idx=0;
    while(true){
        a*=3;b*=2;
        idx++;
        if(a>b){
            cout<<idx;
            return 0;
        }
    }
    return 0;
}