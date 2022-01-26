
/*
  * author: Adam Soliev
  * created: Tue 25 Jan 2022 09:46:24 PM EST
*/

#include <bits/stdc++.h>
using namespace std;

void run_case() {

  // return 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long n, m, a;
  cin >> n >> m >> a;
  if (n == 0 || m == 0) {
    cout << 0 << "\n";
  } else if (a == 1) {
    cout << (long long)n * m << "\n";
  } else {
    long long half1 = (n + a - 1) / a; // round up in int division
    long long half2 = (m + a - 1) / a; // round up in int division

    cout << half1 * half2 << "\n";
  }

  return 0;
}

