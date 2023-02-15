#include <iostream>

using namespace std;

int main()
{
  string s, sC, sD;

  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') sC.push_back(s[i]);
  }

  for (int j = s.size() - 1; j >= 0; j--) {
    if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u') sD.push_back(s[j]);
  }

  cout << (sC == sD ? 'S' : 'N') << endl;

  return 0;
}