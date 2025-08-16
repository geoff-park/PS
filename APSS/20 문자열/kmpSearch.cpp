#include <bits/stdc++.h>

using namespace std;

/*
  KMP 문자열 검색
  - 본문 H에서 패턴 N이 등장하는 모든 시작 인덱스를 반환
  - 시간복잡도: O(|H| + |N|)
  - 전제: getPartialMatch(N)는 0-based pi(실패함수) 배열을 반환
      pi[i] = N[0..i]의 "자기 자신 제외" 최장 접두/접미사 길이
*/
vector<int> kmpSearch(const string& H, const string& N) {
  int n = H.size();
  int m = N.size();
  vector<int> ret;                      // 매치 시작 인덱스들을 담을 결과 벡터
  vector<int> pi = getPartialMatch(N);  // 패턴 N의 실패함수(접두/접미사 길이)
  int begin = 0;                        // H에서 현재 N을 대보기 시작하는 위치
  int matched = 0;                      // N의 접두사 중 이미 일치한 길이
  while (begin <= n - m) {
    // 1) 다음 글자를 비교할 수 있고, 그 글자가 일치하는 경우
    if (matched < m && H[begin + matched] == N[matched]) {
      ++matched;
      if (matched == m) {
        ret.push_back(begin);
      }
    }
    // 2) 불일치가 발생한 경우 (또는 matched == m이라 상단 조건이 false가 된
    // 경우)
    else {
      if (matched == 0) {
        ++begin;
      } else {
        begin += matched - pi[matched - 1];
        matched = pi[matched - 1];
      }
    }
  }
  return ret;
}
