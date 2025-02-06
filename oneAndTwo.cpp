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
        vector<int>v(n);

        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int count2 = 0;

        for(int i=0; i<n; i++){
            if(v[i]==2) count2++;
        }

        if(count2%2!=0){
            cout<<-1<<endl;
            continue;
        }
        if(count2==0){
            cout<<1<<endl;
            continue;
        }
        int c = 0;
        int i = 0;
        while(c!=count2/2){
            if(v[i]==2) c++;
            i++;
        }
        cout<<i<<endl;
    }
    return 0;
}