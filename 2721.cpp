#include <iostream>

using namespace std;

int main()
{
  int n[10], sum = 0;

  for (int i = 0; i < 9; i++) {
    cin >> n[i];

    sum += n[i];
  }

  if (sum % 9 == 1) cout << "Dasher" << endl;
  else if (sum % 9 == 2) cout << "Dancer" << endl;
  else if (sum % 9 == 3) cout << "Prancer" << endl;
  else if (sum % 9 == 4) cout << "Vixen" << endl;
  else if (sum % 9 == 5) cout << "Comet" << endl;
  else if (sum % 9 == 6) cout << "Cupid" << endl;
  else if (sum % 9 == 7) cout << "Donner" << endl;
  else if (sum % 9 == 8) cout << "Blitzen" << endl;
  else cout << "Rudolph" << endl;
  
  return 0;
}