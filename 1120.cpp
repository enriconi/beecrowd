#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char a;
  string b;
  bool isEmpty = false, isEqual = true;

  while (cin >> a >> b && (a != '0' || b != "0")) {
    for (int i = 0; i < b.length(); i++) {

      for (int j = 0; j < b.length(); j++) {
        if (b[j] != a) isEqual = false;
      }
      
      if (b[i] == '0' || isEqual) {
        cout << "0";
        break;
      }

      else if (b[i] != a) cout << b[i];
    }

    cout << endl;

    isEmpty = false;
    isEqual = true;
  }

  return 0;
}