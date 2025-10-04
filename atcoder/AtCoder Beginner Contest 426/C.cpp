#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, q;
  cin >> n >> q;
  vector<int> pc(n + 1, 1);  // pc[v] = "현재 OS 버전이 정확히 v인 PC의 수"
  pc[0] = 0;

  int o = 1;  // oldest among the current versions

  // query
  while (q--) {
    int x, y;
    cin >> x >> y;
    int res = 0;  // 이번 업그레이드에서 실제로 바뀐 PC 수

    // o부터 x까지 존재하는 버전들을 전부 y로 업그레이드
    while (o <= x) {
      res += pc[o];    // 버전 o의 PC들이 업그레이드됨
      pc[y] += pc[o];  // 이 PC들이 전부 버전 y로 이동
      o++;             // 이제 버전 o는 사라졌으므로 다음 버전으로 이동
    }

    // output
    cout << res << '\n';
  }
  return 0;
}
