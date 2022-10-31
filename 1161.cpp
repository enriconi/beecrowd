#include <iostream>

using namespace std;

unsigned long long calcularFatorial(int n)
{
  if (n == 0 || n == 1) return 1;
  return n * calcularFatorial(n - 1);
}

int main()
{
  int n, m;
  
  while (cin >> n >> m) cout << calcularFatorial(n) + calcularFatorial(m) << endl;
  
  return 0;
}