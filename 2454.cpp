#include <iostream>
using namespace std;

int main()
{
  int a, b;

  cin >> a >> b;

  if (a == 0) cout << "C" << endl;
  if (a == 1 && b == 0) cout << "B" << endl;
  if (a == 1 && b == 1) cout << "A" << endl;
  
  return 0;
}