#include <iostream>

using namespace std;

int main()
{
  string s;
  char keyboard[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

  while (getline(cin, s)) {
    for (int i = 0; i < s.size(); i++) {
      for (int j = 0; j < 48; j++) {
        if (s[i] == keyboard[j]) {
          cout << keyboard[j - 1];
          break;
        } else if (s[i] == ' ') {
          cout << ' ';
          break;
        }
      }
    }
    cout << endl;
  }
  
  return 0;
}