#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  string s;

  while (getline(cin, s)) {
    list <char> b;
    list <char>::iterator it = b.begin();

    for (char c : s) {
      if (c == '[') it = b.begin();
      else if (c == ']') it = b.end();
      else b.insert(it, c);
    }

    for (char c : b) cout << c;
    cout << endl;
  }
  
  return 0;
}