#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    if (n % 4 == 0 || (n + 1) % 4 == 0)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO";
        return 0;
    }

    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    ll sum = (n * (n + 1)) / 2;
    ll m = sum / 2;

    vector<ll> set1;
    vector<ll> set2;

    for (ll i = n - 1; i >= 0; i--)
    {
        if (m - arr[i] >= 0)
        {
            set1.push_back(arr[i]);
            m = m - arr[i];
        }
        else
        {
            set2.push_back(arr[i]);
        }
    }

    cout << set1.size() << "\n";
    for (ll i = 0; i < set1.size(); i++)
    {
        cout << set1[i] << " ";
    }
    cout << "\n";
    cout << set2.size() << "\n";
    for (ll i = 0; i < set2.size(); i++)
    {
        cout << set2[i] << " ";
    }
    return 0;
}