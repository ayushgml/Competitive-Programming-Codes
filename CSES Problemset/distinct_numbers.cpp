#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int mcount = 1;
	for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
	for (int i = 1; i < n; i++) {
		mcount += (v[i] != v[i - 1]);
	}
    cout << mcount;
}