#include <iostream>

using namespace std;

int main()
{
  string a, b;

  cin >> a;
  cin >> b;

  cout << ((b.size() > a.size()) ? "no" : "go") << endl;
  
  return 0;
}