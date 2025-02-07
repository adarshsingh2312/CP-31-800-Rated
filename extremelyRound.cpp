#include <iostream>
#include <set>
#include <string>
using namespace std;

bool isExtremelyRound(int n){//O(1)
    int num = n;
    int count = 0;
    while(num!=0){
        int d = num%10;
        if(d!=0)    count++;
        num/=10;
    }
    if(count==1)    return true;  
    return false;
}
set<int>candidates;
int main(){
    for(int i=1; i<1e7; i++){
        if(isExtremelyRound(i)){
            candidates.insert(i);
        }
    }
    int t;
    cin>>t;
    while(t--){//O(t*c)
        int n;
        cin>>n;
        int count = 0;
        for(auto val : candidates){
            if(val<=n){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
