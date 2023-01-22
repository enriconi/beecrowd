#include <iostream>
#include <cstring>

/*
  Não me pergunte o que esse código está fazendo,
  foram umas quatro horas fazendo ele de N maneiras diferentes
*/

typedef unsigned long long ull;

using namespace std;

int len(ull n) {
  int ans = 0;
  
  if (n == 0) return 1;

  while (n > 0) {
    n /= 10;
    ans++;
  }

  return ans;
}

int main()
{
  unsigned short n, a;

  cin >> n;

  for (int i = 4; i < (n + 4); i++) {
    cin >> a;
    
    ull m[a][a];
    int aux[30];

    memset(aux, 0, sizeof(aux));

    for (int j = 0; j < a; j++) {
      for (int k = 0; k < a; k++) {
        cin >> m[j][k];
        m[j][k] *= m[j][k];
        if (len(m[j][k]) > aux[k]) aux[k] = len(m[j][k]);
      }
    }

    cout << "Quadrado da matriz #" << i << ":" << endl;

    for (int j = 0; j < a; j++) {
      for (int k = 0; k < a; k++) {
        ull sizeN = len(m[j][k]);
        ull diff = aux[k] - sizeN;

        for (int o = 0; o < diff; o++) cout << " ";

        cout << (k > 0 ? " " : "") << m[j][k];
      } 
      cout << endl;
    }
    if (i != (n + 3)) cout << endl;
  }

  return 0;
}