
/*
  * author: Adam Soliev
  * created: Tue 25 Jan 2022 11:23:09 PM EST
*/

#include <bits/stdc++.h>
using namespace std;

string process(const string &str) {
  string answer = "";

  for (auto c : str) {
    c = tolower(c);
    if (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i') {
      continue;
    } else {
      answer += ".";
      answer += c;
    }
  }
  return answer;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string str;
  cin >> str;

  cout << process(str) << "\n";

  return 0;
}

