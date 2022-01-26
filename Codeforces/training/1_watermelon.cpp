
/*
* author: Adam Soliev
* created: Sun 23 Jan 2022 08:21:31 PM EST
*/

#include <bits/stdc++.h>
using namespace std;

void run_case() {

  // return 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tests;
  cin >> tests;

  if (tests == 2) {
    cout << "NO"
         << "\n";
  } else if (tests % 2 == 0) {
    cout << "YES"
         << "\n";
  } else {
    cout << "NO"
         << "\n";
  }

  /*
  while (tests-- > 0)
    run_case();
    */

  return 0;
}
