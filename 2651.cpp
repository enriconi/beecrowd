#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  string n;

  cin >> n;

  for (int i = 0; i < n.size(); i++) n[i] = tolower(n[i]);

  if (n.find("zelda") != string::npos) cout << "Link Bolado" << endl;
  else cout << "Link Tranquilo" << endl;
  
  return 0;
}