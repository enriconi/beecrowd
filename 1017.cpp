#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int a, b;

  cin >> a;
  cin >> b;
  
  cout << fixed << setprecision(3);
  cout << ((a * b) / 12.0) << endl;
  
  return 0;
}