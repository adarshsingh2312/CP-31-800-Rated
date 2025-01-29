#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        vector<string>v(10);
        for(int i=0; i<10; i++){
            string s;
            cin >> s;
            v[i] = s;
        }
        int points = 0;
        cout<<endl;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(v[i][j]=='X' && (i==0 || j==0 || i==9 || j==9))  points+=1;
                else if(v[i][j]=='X' && (i==1 || j==1 || i==8 || j==8))  points+=2;
                else if(v[i][j]=='X' && (i==2 || j==2 || i==7 || j==7))  points+=3;
                else if(v[i][j]=='X' && (i==3 || j==3 || i==6 || j==6))  points+=4;
                else if(v[i][j]=='X' && (i==4 || j==4 || i==5 || j==5))  points+=5;
            }
        }
        cout<<points;
    }
    return 0;
}