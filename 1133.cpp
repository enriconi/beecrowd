#include <iostream>

using namespace std;

int main()
{
  int a, b;
  int maior, menor;
  
  cin >> a;
  cin >> b;

  if (a > b) {
    maior = a;
    menor = b;
  } else {
    maior = b;
    menor = a;
  }

  for (int i = (menor + 1); i < maior; i++) {
    if (i % 5 == 2 || i % 5 == 3) cout << i << endl;
  }
  
  return 0;
}