#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cin.ignore();
        string x;
        cin>>x;
        string s;
        cin>>s;
        bool found = false;
        for(int operations=0; operations<=5; operations++){
            if(x.find(s) != string :: npos){
                cout<<operations<<endl;
                found = true;
                break;
            }
            x.append(x);
        }
        if(!found)  cout<<-1<<endl;
    }
    return 0;
}