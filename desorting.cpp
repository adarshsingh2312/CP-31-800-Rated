#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isSorted(vector<int>a){
    for(int i=0; i<a.size()-1; i++){
        if(a[i]>a[i+1]) return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }

        if(!isSorted(a)){
            cout<<0<<endl;
            continue;
        }

        int min_diff = INT_MAX;
        for(int i=0; i<n-1; i++){
            int diff = a[i+1]-a[i];
            min_diff = min(diff,min_diff);
        }
        int count = 0;
        int p = 0;
        count = min_diff/2 +1;
        cout<<count<<endl;
    }    
    return 0;
}