#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T = 10;
  for (int test_case = 1; test_case <= T; test_case++) {
    // input
    int n;
    cin >> n;
    vector<int> lst(n);
    for (int i = 0; i < n; i++) cin >> lst[i];

    // main
    int ans = 0;
    for (int i = 2; i < n - 2; i++) {
      int mx = max({lst[i - 2], lst[i - 1], lst[i + 1], lst[i + 2]});
      if (lst[i] > mx) ans += (lst[i] - mx);
    }

    // output
    cout << '#' << test_case << ' ' << ans << '\n';
  }
  return 0;
}
