#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin.ignore();
        string s;
        getline(cin,s);
        int count = 0;
        bool flag = true;
        for(int i=0; i<n; i++){
            if(s[i-1]=='.' && s[i+1]=='.' && s[i]=='.' && i!=0 && i!=n-1){
                cout<<2<<endl;
                flag = false;
                break;
            }
            else if(s[i]=='.'){
                count++;
            }
        }
        if(flag==true)  cout<<count<<endl;
    }
    return 0;
}