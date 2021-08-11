#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n];
    long long c = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if(arr[i+1]<arr[i]){
            c = c + (arr[i] - arr[i + 1]);
            arr[i + 1] = arr[i];
        }
    }
    cout << c;

    return 0;
}