
/*
  * author: Adam Soliev
  * created: Tue 25 Jan 2022 10:35:38 PM EST
*/

#include <bits/stdc++.h>
using namespace std;

/*
 *
 *
 * 1,4
 * 2,2
0 0 0 0 0
0 0 0 0 0
0 0 1 0 0
0 0 0 0 0
0 0 0 0 0
 *
 *
 */
void run_case() {

  // return 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int row = 0, col = 0;
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      int num;
      cin >> num;
      if (num == 1) {
        row = i;
        col = j;
      }
    }
  }
  int diff = abs(row - 2) + abs(col - 2);
  cout << diff << "\n";

  return 0;
}
