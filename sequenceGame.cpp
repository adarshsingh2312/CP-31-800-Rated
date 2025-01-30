#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSorted(vector<int> &b){
    for(int i=1; i<b.size(); i++){
        if(b[i]<b[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>b(n);
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        vector<int>a;
        if(isSorted(b)) {
            a = b;
        }
        else{
            a.push_back(b[0]);
            for(int i=1; i<n; i++){
                if(b[i]>=b[i-1])   a.push_back(b[i]);
                else{
                    if(b[i]!=1)    a.push_back(b[i]-1);
                    else    a.push_back(1);
                    a.push_back(b[i]);
                }
            }
        }
            int m = a.size();
            cout<<m<<endl;
            for(int i=0; i<m; i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
    }
    return 0;
}