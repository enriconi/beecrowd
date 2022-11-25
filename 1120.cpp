#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

string removeZero(string n)
{
    int i = 0;
  
    while (n[i] == '0') i++;
    n.erase(0, i);
  
    return n;
}

int main()
{
  char a;
  string b;
  bool isOnlyZero = true;

  while (cin >> a >> b && (a != '0' || b != "0")) {
    b.erase(remove(b.begin(), b.end(), a), b.end());

    for (int j = 0; j < b.length(); j++) {
      if (b[j] != '0') {
        isOnlyZero = false;
      }
    }

    if (isOnlyZero) {
      cout << "0" << endl;
    } else {      
      string c = removeZero(b);
      cout << c << endl;
    }

    isOnlyZero = true;
  }

  return 0;
}