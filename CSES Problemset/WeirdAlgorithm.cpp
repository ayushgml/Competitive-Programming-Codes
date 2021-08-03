#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    cout<<n<<" ";

    while(n!=1){
        if(n%2==0){
            n=n/2;
            cout<<n<<" ";
        }
        else{
            n=(3*n)+1;
            cout<<n<<" ";
        }
    }

    return 0;
}