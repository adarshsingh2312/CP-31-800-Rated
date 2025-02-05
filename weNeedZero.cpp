#include <iostream>
#include <vector>
#include <string>
using namespace std;


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
        int xor_sum = 0;
        for(int i=0; i<n; i++){
            xor_sum^=a[i];
        }
        if(n%2!=0)  cout<<xor_sum<<endl;
        else{
            if(xor_sum==0)  cout<<0<<endl;
            else    cout<<-1<<endl;
        }
    }
    return 0;
}