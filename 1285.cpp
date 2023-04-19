#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

bool possuiDigitosRepetidos(int n) {
  int digitos[10];
  memset(digitos, 0, sizeof(digitos));

  while (n > 0) {
    int d = n % 10;
    
    if (digitos[d] > 0) return true;
    
    digitos[d]++;
    n /= 10;
  }

  return false;
}

int countNumeros(int n, int m) {
  int count = 0;

  for (int i = n; i <= m; i++) {
    if (!possuiDigitosRepetidos(i)) count++;
  }

  return count;
}

int main()
{
  int n, m;

  while (cin >> n >> m) {
    int count = countNumeros(n, m);
    cout << count << endl;
  }
  
  return 0;
}