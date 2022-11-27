#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  string n;
  int aux = 0;

  while (getline(cin, n)) {
    for (int i = 0; i < n.length(); i++) {
      if (n[i] >= 65 && n[i] <= 90 || n[i] >= 97 && n[i] <= 122) aux++;
  
      if (aux % 2 != 0) n[i] = toupper(n[i]);
      else if (aux % 2 == 0) n[i] = tolower(n[i]);
    }
  
    cout << n << endl;
    
    aux = 0;
  }

  return 0;
}