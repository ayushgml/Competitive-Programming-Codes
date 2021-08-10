#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int maxlen(int arr[], int n)
{
    int count = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count = 0;
        else
        {
            count++;
            res = max(res, count);
        }
    }
    return res;
}

int maxnum(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    int n = str.size();
    char arr[n];
    int arrA[n], arrG[n], arrT[n], arrC[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = char(str[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'A')
        {
            arrA[i] = 1;
        }
        else
        {
            arrA[i] = 0;
        }

        if (arr[i] == 'T')
        {
            arrT[i] = 1;
        }
        else
        {
            arrT[i] = 0;
        }

        if (arr[i] == 'G')
        {
            arrG[i] = 1;
        }
        else
        {
            arrG[i] = 0;
        }

        if (arr[i] == 'C')
        {
            arrC[i] = 1;
        }
        else
        {
            arrC[i] = 0;
        }
    }
    int A, T, G, C;
    A = maxlen(arrA, n);
    T = maxlen(arrT, n);
    G = maxlen(arrG, n);
    C = maxlen(arrC, n);

    int max1, max2, max;
    max1 = maxnum(A, T);
    max2 = maxnum(G, C);
    max = maxnum(max1, max2);
    cout << max;

    return 0;
}