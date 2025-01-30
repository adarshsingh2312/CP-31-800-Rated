#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

bool isAllSame(vector<int>a){
    int x = a[0];
    for(int i=0; i<a.size(); i++){
        a[i] = x^a[i];
        if(a[i]!=0) return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);// 4 4 8 12 12
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        if(isAllSame(a)){    
            cout<<-1<<endl;
            continue;
        }

        sort(a.begin(),a.end());// 1 1 2 4 7 7 9
        vector<int>b;// 
        vector<int>c;
        int great = INT_MIN;
        for(int i=0; i<n; i++){
            great = max(great,a[i]);
        }
        for(int i=0; i<n; i++){
            if(a[i]==great) c.push_back(a[i]);
            else    b.push_back(a[i]);
        }
        cout<<b.size()<<" "<<c.size()<<endl;
        
        for(int i=0; i<b.size(); i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        for(int i=0; i<c.size(); i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}