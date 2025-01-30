#include <iostream>
#include <climits>
#include <vector>
#include <string>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int operations = INT_MAX;
    for(int i=0; i<n; i++){
        if(v[i]==0) {
            cout<<0<<endl;
            return 0;
        }
        operations = min(operations,abs(v[i]-0));
    }
    cout<<abs(operations)<<endl;
    return 0;
}