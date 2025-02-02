#include <iostream>
#include <vector>
#include <climits>
using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>v(k-1);
        for(int i=1; i<=k; i++){
            if(i==x)    continue;
            v.push_back(i);
        }
        int m = 0;
        int maxi = INT_MIN;
        if(x!=1){
            cout<<"YES"<<endl;
            m = n;
            cout<<m<<endl;
            for(int i=1; i<=m; i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else{//x = 1
            if(k==1){
                cout<<"NO"<<endl;
                continue;
            }
            else{
                if(n%2==0){
                    cout<<"YES"<<endl;
                    m = n/2;
                    cout<<m<<endl;
                    for(int i=1; i<=n/2; i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }
                else{ 
                    if(k>=3){
                        cout<<"YES"<<endl;
                        m = n/2;
                        cout<<m<<endl;
                        for(int i=0; i<m-1; i++){
                            cout<<2<<" ";
                        }
                        cout<<3<<endl;
                    }
                    else{
                        cout<<"NO"<<endl;
                    }
            }
        }
        }
}
}