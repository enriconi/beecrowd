#include <iostream>

/*
  Meu agradecimento especial ao @feodorv (https://www.beecrowd.com.br/judge/pt/profile/175304), que me indicou a estudar sobre pré-calcular os fatoriais.
  E ao GeeksForGeeks (https://www.geeksforgeeks.org/factorial-large-number/) pelo tutorial! :)
*/

using namespace std;

static bool isPrime(int n) {
  for (int i = 2; i < n; i++) {
    if (n % i == 0 && i != n) return false;
  }
  return true;
}

int multiply(int x, int res[], int res_size);
 
void factorial(int n) {
  int res[500];
  
  res[0] = 1;
  int res_size = 1;

  for (int x = 2; x <= n; x++) res_size = multiply(x, res, res_size);
  for (int i = res_size - 1; i >= 0; i--) cout << res[i];
}

int multiply(int x, int res[], int res_size) {
  int carry = 0;
 
  for (int i = 0; i < res_size; i++) {
    int prod = res[i] * x + carry;

    res[i] = prod % 10; 
    carry = prod / 10;
  }
 
  while (carry) {
    res[res_size] = carry % 10;
    carry = carry / 10;
    res_size++;
  }
  
  return res_size;
}
 
int main() 
{
  int n, a;

  cin >> a;

  for (int i = 0; i < a; i++) {
    cin >> n;

    if (isPrime(n) && n > 1) {
      cout << n << "! = ";
      factorial(n);
      cout << endl;
    }
  }
  
  return 0;
}