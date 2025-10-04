**문어박사 IT편의점**

- 소프트웨어 vs 하드웨어 vs 펌웨어
- 코딩테스트, SW역량평가 연습방법, 꿀팁
- 2001_ 파리 퇴치 (SWEA)
- View (SWEA)

<br>

**C++ template for swea**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;
  for (int test_case = 1; test_case <= T; test_case++) {
    // input

    // main
    int ans = 0;

    // output
    cout << '#' << test_case << ' ' << ans << '\n';
  }
  return 0;
}
```

<br>

**Python template for swea**

```python
import sys

sys.stdin = open("input.txt", "r")

T = int(input())
for test_case in range(1, T + 1):
    ans = 0
    print(f"#{test_case} {ans}")
```
