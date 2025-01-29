#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        bool exists = false;
        for(int i=0; i<n; i++){
            if(arr[i]==k){
                cout<<"Yes"<<endl;
                exists = true;
                break;
            }
        }
        if(!exists) cout<<"No"<<endl;
    }
    return 0;
}