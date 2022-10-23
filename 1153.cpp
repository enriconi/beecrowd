#include <iostream>

using namespace std;

int main()
{
  int a, aux = 1;

  cin >> a;

  for (int i = 1; i <= a; i++) aux *= i;

  cout << aux << endl;
  
  return 0;
}