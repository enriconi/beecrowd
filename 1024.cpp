#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int n;
  string text;

  cin >> n;

  // Limpa o buffer da linha
  cin.get();

  for (int i = 0; i < n; i++) {
    getline(cin, text);

    for (int j = 0; j < text.length(); j++) {
      if (text[j] >= 65 && text[j] <= 90 || text[j] >= 97 && text[j] <= 122) text[j] += 3;
    }

    for (int k = 0, l = text.length() - 1; k < (text.length() / 2); k++, l--) {
      char temp = text[k];
      text[k] = text[l];
      text[l] = temp;
    }

    for (int m = text.length() - 1; m >= (text.length() / 2); m--) {
      text[m] -= 1;
    }
    
    cout << text << endl;
  }
  
  return 0;
}