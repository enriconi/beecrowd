#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n;

  while (cin >> n) {
    string s;
    vector<string> v;
    
    for (int i = 0; i < n; i++) {
      cin >> s;
      v.push_back(s);
    }

    sort(v.begin(), v.end());

    for (auto number : v) cout << number << endl;
  }

  return 0;
}