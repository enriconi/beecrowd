#include <iostream>

using namespace std;

int main()
{
  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  string s;
  int n;

  cin >> n;

  cin.ignore();

  for (int i = 0; i < n; i++) {
    int aux = 0;
    
    getline(cin, s);
  
    for (int i = 0; i < 26; i++) {
      if (s.find(alphabet[i]) != string::npos) aux++;
    }
  
    if (aux >= 26) cout << "frase completa" << endl;
    else if (aux > 13) cout << "frase quase completa" << endl;
    else cout << "frase mal elaborada" << endl;
  }
  
  return 0;
}