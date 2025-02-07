#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isParity(vector<int>&v){
    int sum = 0;
    for(int i=0; i<v.size()-1; i++){
        if((v[i]+v[i+1])%2==0)  return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        else if(isParity(v)){
            cout<<0<<endl;
            continue;
        }
        int streak_odds = 1;
        int streak_evens = 1;
        for(int i=0; i<n-1; i++){
            if(v[i]%2==0 && v[i+1]%2==0){
                streak_evens++;
            }
            else if(v[i]%2!=0 && v[i+1]%2!=0){
                streak_odds++;
            }   
        }
        cout<<(streak_evens-1)+(streak_odds-1)<<endl;
    }
    return 0;
}