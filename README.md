**문어박사 IT편의점**

- [x] 소프트웨어 vs 하드웨어 vs 펌웨어
- [x] 코딩테스트, SW역량평가 연습방법, 꿀팁
- [x] 2001\_ 파리 퇴치 (SWEA)
- [x] View (SWEA)

<br>

**競技プログラミングの鉄則**

- [ ] 01 알고리즘과 계산량
- [ ] 02 누적 합
- [ ] 03 바이너리 서치
- [ ] 04 동적 계획 알고리즘
- [ ] 05 수학적 문제
- [ ] 06 고찰 테크닉
- [ ] 07 휴리스틱
- [ ] 08 데이터 구조와 쿼리 처리
- [ ] 09 그래프 알고리즘
- [ ] 10 종합 문제

<br>

**특훈**

- [ ] disjoint_set_100
- [ ] segtree_100

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
