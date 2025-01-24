#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int currentCap = arr[0];
        int maxCap = arr[0];
        for(int i=1; i<n; i++){
            currentCap=arr[i]-arr[i-1];
            maxCap = max(maxCap,currentCap);
        }
        currentCap = 2*(x-arr[n-1]);
        maxCap = max(currentCap,maxCap);
        cout<<maxCap<<endl;
    }
    return 0;
}