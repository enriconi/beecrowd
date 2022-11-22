#include <iostream>
#include <set>

using namespace std;

int main()
{
  int n;
  string a;
  set<string> pomekons;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;
    pomekons.insert(a);
  }

  cout << "Falta(m) " << 151 - pomekons.size() << " pomekon(s)." << endl;
  
  return 0;
}