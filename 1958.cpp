#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  long double n;

  cin >> n;

  cout << fixed << setprecision(4);
  cout << uppercase << showpos << scientific << n << endl;
  
  return 0;
}