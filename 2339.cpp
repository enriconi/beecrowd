#include <iostream>

using namespace std;

int main()
{
  int a, b, c;

  cin >> a >> b >> c;

  string calculo = (b / c) >= a ? "S" : "N";
  
  cout << calculo << endl;
  
  return 0;
}