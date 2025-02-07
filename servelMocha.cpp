#include <iostream>
#include <vector>
#include <string>
#include <numeric>
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
        bool yes = false;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(std::gcd(a[i],a[j])<=2){
                    yes = true;
                }
            }
        }
        if(yes) cout<<"Yes"<<endl;
        else    cout<<"No"<<endl;
    }
}