#include <bits/stdc++.h>
using namespace std;

int n, x, a[100];
int ans = 0;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // input
  cin >> n >> x;
  for (int i = 0; i < n; i++) cin >> a[i];

  // Linear Search
  for (int i = 0; i < n; i++) {
    if (a[i] == x) ans = 1;
  }

  // output
  if (ans == 1)
    cout << "Yes" << '\n';
  else
    cout << "No" << '\n';
  return 0;
}
