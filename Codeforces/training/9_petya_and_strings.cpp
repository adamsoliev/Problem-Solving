
/*
  * author: Adam Soliev
  * created: Tue 25 Jan 2022 11:07:00 PM EST
*/

#include <bits/stdc++.h>
using namespace std;

void run_case() {

  // return 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string a, b;
  cin >> a >> b;

  // transform(start of range 1, end of range 1, start of range 2)
  // range 2 - where to write the returned value
  transform(a.begin(), a.end(), a.begin(),
            [](unsigned char c) { return tolower(c); });
  transform(b.begin(), b.end(), b.begin(),
            [](unsigned char c) { return tolower(c); });

  if (a < b) {
    cout << -1 << "\n";
  } else if (a > b) {
    cout << 1 << "\n";
  } else {
    cout << 0 << "\n";
  }

  return 0;
}

