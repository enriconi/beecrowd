#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char n[1001];
  int d = 0, e = 0;
  bool startRight = false;

  while (cin >> n) {
    for (int i = 0; i < strlen(n); i++) {
      if (n[i] == '(') e++;
      else if (n[i] == ')') {
        d++;
        if (d > e) startRight = true;
      }
    }

    if (e == d && !startRight) cout << "correct" << endl;
    else cout << "incorrect" << endl;

    e = 0;
    d = 0;
    startRight = false;
  }
  
  return 0;
}