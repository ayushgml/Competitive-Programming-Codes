#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;
    ll arr[n-1];
    for(ll i = 0 ; i < n-1 ; i++ )
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    if(n==2){
        if(arr[0]==1)
            cout<<"2";
        else
            cout<<"1";
    }
    else if(n>2){
        for(ll i = 0 ; i < n-1 ; i++ )
        {
            if((arr[i]==arr[i+1]-2) && i!=n-2)
                cout<<arr[i]+1;
            else if((arr[i]==n-1) && i==n-2)
                cout<<n;
        }
    }
    
    return 0;
}