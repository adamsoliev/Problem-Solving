
/*
  * author: Adam Soliev
  * created: Sun 23 Jan 2022 08:56:15 PM EST
*/

#include <bits/stdc++.h>
using namespace std;

void run_case() {
  string word;
  cin >> word;
  if (word.size() > 10) {
    cout << word[0] + to_string(word.size() - 2) + word[word.size() - 1]
         << "\n";
  } else {
    cout << word << "\n";
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

  return 0;
}

