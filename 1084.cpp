#include <iostream>

using namespace std;

int main()
{
  int n, d;

  while (cin >> n >> d && (n != 0 && d != 0)) {
    string s, ans;
    int aux = 0;

    cin >> s;

    for (char c : s) {
      while (ans.size() > 0 && c > ans.back() && aux < d) {
        ans.pop_back();
        aux++;
      }
      if (ans.size() < (n - d)) ans.push_back(c);
    }
    cout << ans << endl;
  }
  
  return 0;
}