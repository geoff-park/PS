#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // input
  int n;
  cin >> n;

  // 윗자리부터 순서대로 '2진법으로 변환한 값'을 구한다.
  for (int x = 9; x >= 0; x--) {
    int w = (1 << x);  // 2^x
    cout << (n / w) % 2;
  }
  return 0;
}
