#include <iostream>
#include <vector>
using namespace std;
int main(void){
    int n;
    cin>>n;
    if(n<1 || n>1000) return 0;
    vector<int>score(3,0);
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>score.at(0)>>score.at(1)>>score.at(2);
        int count=0;
        for(int j=0;j<3;j++){
            if(score[j]==1) count++;
        }
        if(count>=2) ans++;
    }
    cout<<ans;
    return 0;
}
