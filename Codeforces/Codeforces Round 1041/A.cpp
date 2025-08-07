#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vi v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        set<int> s(v.begin(), v.end());
        s.erase(-1);
        if (s.size() <= 1 && s.count(0) == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
