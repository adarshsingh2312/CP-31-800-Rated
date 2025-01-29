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
        vector<int>e(n-1);
        int sum = 0;
        for(int i=0; i<n-1; i++){
            cin>>e[i];
            sum+=e[i];
        }
        cout<<(-1)*sum<<endl;
    }
    return 0;
}