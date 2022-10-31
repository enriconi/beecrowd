#include <iostream>

using namespace std;

long long fib(int n) {
  long long penultimo = 0, ultimo = 1, fib;

  if (n < 2) return n;
  
  for (int j = 3; j <= n; j++) {
    fib = penultimo;
    penultimo = ultimo;
    ultimo += fib;
  }

  return penultimo + ultimo;
}

int main()
{
  int n, a;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;
    cout << "Fib(" << a << ") = " << fib(a) << endl;
  }
  
  return 0;
}