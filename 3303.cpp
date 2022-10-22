#include <iostream>

using namespace std;

int main()
{
  string n;

  cin >> n;

  if (n.length() >= 10) cout << "palavrao" << endl;
  else cout << "palavrinha" << endl;
  
  return 0;
}