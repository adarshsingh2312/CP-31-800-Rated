#include <iostream>
#include <vector>
#include <string>
using namespace std;

void Sort(vector<int>&v){
    for(int i=0; i<v.size()-1; i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i]<v[j]){
                swap(v[i],v[j]);
            }
        }
    }
    return;
}

bool isSame(vector<int>&v){
    for(int i=0; i<v.size()-1; i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i]!=v[j])  return false;
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

        if(isSame(v)){
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
        Sort(v);
        
        for(int i=0; i<n; i++){
            if(v[0]==v[1]){
                swap(v[0],v[n-1]);
            }
        }

        for(int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}   