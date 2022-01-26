
/*
  * author: Adam Soliev
  * created: Tue 25 Jan 2022 10:00:24 PM EST
*/

#include <bits/stdc++.h>
using namespace std;

void run_case() {

  // return 0;
}

void print(vector<int> &nums) {
  for (auto num : nums) {
    cout << num << ",";
  }
  cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;
  cin >> n >> k;

  vector<int> nums;
  while (n-- > 0) {
    int num;
    cin >> num;
    nums.push_back(num);
  }
  int num = nums[k - 1], cnt = 0;
  for (auto n : nums) {
    if (n >= num && n)
      ++cnt;
  }
  cout << cnt << "\n";

  return 0;
}

