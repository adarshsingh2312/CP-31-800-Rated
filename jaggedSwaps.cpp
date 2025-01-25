#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>&v){
    for(int i=0; i<v.size()-1; i++){
        if(v[i]>v[i+1]){
            return false;
        }
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
        for(int i=1; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(v[i]>v[i-1] && v[i]>v[j]){
                    swap(v[i],v[j]);
                }
            }
        }
        if(isSorted(v)){
            cout<<"YES"<<endl;
        }
        else if(!isSorted(v)){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}