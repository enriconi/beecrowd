#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  string n;
  bool upper = false, lower = false, number = false, wrong = false;

  while (getline(cin, n)) {

    for (int i = 0; i < n.length(); i++) {
      if (isdigit(n[i])) number = true;
      else if (isupper(n[i])) upper = true;
      else if (islower(n[i])) lower = true;
      else wrong = true;
    }

    if (wrong || !(upper && lower && number) || n.length() < 6 || n.length() > 32) cout << "Senha invalida." << endl;
    else cout << "Senha valida." << endl;

    upper = false;
    lower = false;
    number = false;
    wrong = false;
  }
  
  return 0;
}