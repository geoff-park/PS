#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vector<int>> vvi;

int dp[10009];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vi v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    dp[0] = 1;
    for (int coin : v)
    {
        for (int i = coin; i <= k; ++i)
        {
            dp[i] += dp[i - coin];
        }
    }
    cout << dp[k];
    return 0;
}
