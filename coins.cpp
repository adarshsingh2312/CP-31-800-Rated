#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        if(n%2==0 || n%k==0){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            if(n%2!=0 && k%2==0){
                cout<<"NO"<<endl;
                continue;
            }
            else if(n%2!=0 && k%2!=0){
                cout<<"YES"<<endl;
                continue;
            }
        }
    }
    return 0;
}