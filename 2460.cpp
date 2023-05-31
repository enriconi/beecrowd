#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  vector <int> v;
  int n, m, a;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;
    v.push_back(a);
  }

  cin >> m;

  for (int i = 0; i < m; i++) {
    cin >> a;
    auto del = find(v.begin(), v.end(), a);
    if (del != v.end()) v.erase(del);
  }

  for (int i = 0; i < v.size(); i++) {
    if (i == v.size() - 1) cout << v[i] << endl;
    else cout << v[i] << " ";
  }

  return 0;
}