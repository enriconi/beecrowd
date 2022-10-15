#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
  string a;
  double b, c;

  cin >> a;
  cin >> b;
  cin >> c;

  cout << fixed << setprecision(2);
  cout << "TOTAL = R$ " << b + (c * 0.15) << endl;
  
  return 0;
}