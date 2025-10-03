#include <bits/stdc++.h>
using namespace std;

int arr[15][15];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;
  for (int test_case = 1; test_case <= T; test_case++) {
    // input
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        cin >> arr[i][j];
      }
    }

    // main
    int ans = 0;
    for (int si = 0; si < N - M + 1; si++) {
      for (int sj = 0; sj < N - M + 1; sj++) {
        int cnt = 0;
        for (int i = si; i < si + M; i++) {
          for (int j = sj; j < sj + M; j++) {
            cnt += arr[i][j];
          }
        }
        if (ans < cnt) ans = cnt;
      }
    }

    // output
    cout << '#' << test_case << ' ' << ans << '\n';
  }
  return 0;
}
