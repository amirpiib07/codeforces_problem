#include <bits\stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0, j=1;
    int count=0;
    while(i<n){
        while(j<n && s[i]==s[j])j++;
        count+=j-i-1;
        i=j;
        j++;
    }
    cout<<count;
    return 0;
}