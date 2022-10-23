#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
  int n, h;
  double s;
  
  cin >> n;
  cin >> h;
  cin >> s;
  
  cout << fixed << setprecision(2);
  cout << "NUMBER = " << n << endl;
  cout << "SALARY = U$ " << h * s << endl;

  return 0;
}