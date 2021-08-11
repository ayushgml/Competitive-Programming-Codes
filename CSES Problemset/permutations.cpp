#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    if (n ==2 || n== 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    if (n % 2 == 0)
    {
        for (int i = 1; i < n; i = i + 2)
        {
            cout << arr[i] << " ";
        }
        for (int i = 0; i < n - 1; i = i + 2)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        for (int i = 0; i < n; i = i + 2)
        {
            cout << arr[i] << " ";
        }
        for (int i = 1; i < n - 1; i = i + 2)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}