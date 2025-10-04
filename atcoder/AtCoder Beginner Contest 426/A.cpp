#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string x, y;
  cin >> x >> y;
  if (x == "Ocelot" && y == "Serval") {
    cout << "No" << '\n';
  } else if (x == "Ocelot" && y == "Lynx") {
    cout << "No" << '\n';
  } else if (x == "Serval" && y == "Lynx") {
    cout << "No" << '\n';
  } else {
    cout << "Yes" << '\n';
  }
  return 0;
}
