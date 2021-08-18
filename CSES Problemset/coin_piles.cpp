#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int maxno = max(a, b);
        int minno = min(a, b);
        if( (maxno/2) > minno ){
            cout << "NO" << "\n";
        }
        else{
            if((a+b)%3==0){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
    }
}