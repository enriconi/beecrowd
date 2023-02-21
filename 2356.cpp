#include <iostream>

using namespace std;

int main()
{
  string a, b;

  while (cin >> a) {
    cin >> b;
    if (a.find(b) != string::npos) cout << "Resistente" << endl;
    else cout << "Nao resistente" << endl;
  }
    
  return 0;
}