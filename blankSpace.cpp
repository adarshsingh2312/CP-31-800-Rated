#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool is0(vector<int>&a){
    for(int i=0; i<a.size(); i++){
        if(a[i]==0) return true;
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(!is0(a)){
            cout<<0<<endl;
            continue;
        }
        int current = 1;
        int maximum = 1;
        for(int i=0; i<n-1; i++){
            if(a[i]==0 && a[i+1]==0){
                current++;
            }
            else{
                current = 1;
            }
            maximum = max(current,maximum);
        }
        cout<<maximum<<endl;
    }
    return 0;
}