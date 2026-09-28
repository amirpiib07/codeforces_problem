#include <bits\stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    int uppercase=0, lowercase=0;
    for(char ch: s){
        uppercase+= (ch>=65 && ch<=90)? 1:0;
        lowercase+= (ch>=97 && ch<=122)?1:0;
    }
    if(uppercase>lowercase){
        string ans="";
        for(char ch: s){
            if(ch>=97 && ch<=122) ans+=(ch-32);
            else ans+=ch;
        }
        cout<<ans;
    }
    else{
        string ans="";
        for(char ch: s){
            if(ch<=90 && ch>=65) ans+=ch+32;
            else ans+=ch;
        }
        cout<<ans;
    }
    return 0;
}