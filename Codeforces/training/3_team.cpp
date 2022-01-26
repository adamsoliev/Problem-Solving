
/*
  * author: Adam Soliev
  * created: Sun 23 Jan 2022 09:00:38 PM EST
*/

#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void run_case() {
  int a, b, c;
  cin >> a >> b >> c;
  int sum = a + b + c;
  if (sum >= 2)
    ++cnt;
  // return 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tests;
  cin >> tests;

  while (tests-- > 0)
    run_case();

  cout << cnt << "\n";

  return 0;
}

