
/*
  * author: Adam Soliev
  * created: Tue 25 Jan 2022 10:30:45 PM EST
*/

#include <bits/stdc++.h>
using namespace std;

int X = 0;
void run_case() {
  char a, b, c;
  cin >> a >> b >> c;
  if (a == '+' || b == '+' || c == '+') {
    ++X;
  } else {
    --X;
  }
  // return 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tests;
  cin >> tests;

  while (tests-- > 0)
    run_case();

  cout << X << "\n";

  return 0;
}

