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
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int negativeCount = 0;
        int positiveCount = 0;

        for(int i=0; i<n; i++){
            if(a[i]==-1)    negativeCount++;
            else    positiveCount++;
        }
        if(negativeCount <= positiveCount){
            if(negativeCount%2==0){
                cout<<0<<endl;
                continue;
            }  
            else{
                cout<<1<<endl;
                continue;
            }
        }
        else{
            int ops = 0;
            int i = 0;
            while((negativeCount>positiveCount) && (i<n)){
                if(a[i]==-1){
                    a[i] = 1;
                    negativeCount--;
                    positiveCount++;
                    ops++;
                }
                i++;
            }
            if(negativeCount%2==0){
                cout<<ops<<endl;
                continue;
            }
            else{
                cout<<(ops+1)<<endl;
                continue;
            }
        }
    }
    return 0;
}