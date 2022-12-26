#include <iostream>
#include <map>

/* 
  Questão com problema no buffer,
  por algum motivo cin.ignore() não funciona
*/ 

using namespace std;

int main()
{
  int m, n;
  char a, b;
  map<char, char> mC;
  string s;

  cin >> m >> n;

  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    mC[b] = a;
    mC[a] = b;
  }

  getline (cin, s);
  string text;

  while (n--) {
    getline(cin, text);

    for (int i = 0; i < text.size(); i++) {
      auto it = mC.find(text[i]);
      if (it != mC.end()) cout << it->second;
      else cout << text[i];
    }
    cout << endl;
  }

  return 0;
}