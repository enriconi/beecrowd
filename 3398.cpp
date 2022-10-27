#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
  double a, b;

  cin >> a;
  cin >> b;
  
  cout << fixed << setprecision(2);
  cout << a * b << endl;

  return 0;
}