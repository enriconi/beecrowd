#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  string n;
  int aux = 0;

  getline(cin, n);
  
  string temp = "";

  for (int i = 0; i < n.size(); i++) {
    if (n[i] != ' ') {
      if ((i % 2 != 0 && aux % 2 == 0) || (i % 2 == 0 && aux % 2 != 0)) temp.push_back(n[i]);
    } else {
      cout << temp << " ";
      temp = "";
      aux++;
    }
  }

  cout << temp << endl;
  
  return 0;
}