#include <iostream>

using namespace std;

int aux;

int fib(int n) {
  aux++;

  if (n < 2) return n;
  
  return fib(n - 1) + fib(n - 2);
}

int main()
{
  int n, a, r;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;
    
    r = fib(a);

    cout << "fib(" << a << ") = " << (aux - 1) << " calls = " << r << endl;
    
    aux = 0;
  }
  
  return 0;
}