#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b || c>(a+d-b)){
            cout<<-1<<endl;
            continue;
        }
        int ops = 0;
        ops+=(d-b);
        ops+=(a+d-b)-c;
        cout<<ops<<endl;
    }
    return 0;
}