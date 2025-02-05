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
        string s;
        cin>>s;
        int length = n;
        int i = 0;
        int j = n-1;
        while(i<j){
            if(s[i]!=s[j]){
                length-=2;
            }
            else{
                break;
            }
            i++;
            j--;
        }
        cout<<length<<endl;
    }
    return 0;
}