#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        int moves = 0;
        if(x%k!=0){
            moves = 1;
            cout<<moves<<endl;
            cout<<x<<endl;
        }
        else{
            if(x>0){
                moves = 2;
                cout<<moves<<endl;
                cout<<(x-1)<<" "<<1<<endl;
            }
            else{
                moves = 2;
                cout<<moves<<endl;
                cout<<(x+1)<<" "<<1<<endl;
            }
        }
    }
    return 0;
}