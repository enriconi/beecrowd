#include <iostream>
#include <vector>

using namespace std;

int main()
{
  string s;
  int n, a;

  while (cin >> s) {
    vector<char> v;
    
    cin >> n;
  
    for (int i = 0; i < n; i++) {
      cin >> a;
      v.push_back(s[a - 1]);
    }
  
    for (char i : v) cout << i;
    cout << endl;
  }
  
  return 0;
}