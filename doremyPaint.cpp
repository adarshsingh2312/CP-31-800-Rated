#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];//1 1 4 5
        }
        unordered_map<int,int> m;
        if(n<=2){
            cout<<"YES"<<endl;
            continue;
        }
        else if(n%2==0){
            int equals = 0;
            for(int i=0; i<n; i++){
                m[v[i]]++;
            }
            for(auto p : m){
                if(p.second%2==0){
                    equals += (p.second/2);
                }
                
            }
            if(equals==n/2) {
                cout<<"YES"<<endl;
                continue;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        
        else{
            for(int i=0; i<n; i++){
                m[v[i]]++;
            }
            auto it = m.begin();
            if(m.size()==1) {
                cout<<"YES"<<endl;
                continue;
            }
            else if(m.size()==2){
                if((it->second == n/2 || it->second == (n/2) + 1) && m.size() == 2){
                    cout<<"YES"<<endl;
                    continue;;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"NO"<<endl;
                continue;;
            }
            
        }
    }
    return 0;
}