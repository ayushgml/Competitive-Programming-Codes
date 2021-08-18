#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;

int32_t main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        ulli x, y;
        cin >> y >> x;
        ulli maxnum = std::max(x, y);
        ulli n = (maxnum * maxnum) - maxnum + 1;
        if (maxnum % 2 == 0)
            cout << n + y - x << "\n";
        else
            cout << n + x - y << "\n";
        t--;
    }
    return 0;
}