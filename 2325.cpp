#include <iostream>
#include <map>

using namespace std;

int main()
{
  int c, n;
  map <int, int> programas;
  map <int, int> ans;

  cin >> c >> n;

  for (int i = 0; i < c; i++) {
    int p, v;
    cin >> p >> v;
    // programas.insert({p, v});
    programas[p] = v;
  }

  for (int i = 0; i < n; i++) {
    int p, v;
    cin >> p >> v;
    
    if (programas.find(p) != programas.end()) {
      if (programas[p] < v) {
        // programas.insert({p, v});
        // ans.insert({p, v});
        programas[p] = v;
        ans[p] = v;
      }
    } else {
      // programas.insert({p, v});
      // ans.insert({p, v});
      programas[p] = v;
      ans[p] = v;
    }
  }

  for (auto el : ans) cout << el.first << " " << el.second << endl;

  return 0;
}