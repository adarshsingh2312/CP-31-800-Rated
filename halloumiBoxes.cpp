#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSorted(vector<int>& v) {
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] > v[i + 1]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if(k==1 && !isSorted(v)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}