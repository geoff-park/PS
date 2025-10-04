#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  map<char, int> mp;
  for (auto& nx : s) mp[nx]++;
  for (auto& nx : mp) {
    if (nx.second == 1) {
      cout << nx.first << '\n';
    }
  }
  return 0;
}
