#include <iostream>

using namespace std;

int main()
{
  int n, qtd, meta = 0;
  string alimento;

  while (cin >> n && n != 0) {
    for (int i = 0; i < n; i++) {
      cin >> qtd;
      getline(cin, alimento);

      if (alimento == " suco de laranja") meta += qtd * 120;
      else if (alimento == " morango fresco" || alimento == " mamao") meta += qtd * 85;
      else if (alimento == " goiaba vermelha") meta += qtd * 70;
      else if (alimento == " manga") meta += qtd * 56;
      else if (alimento == " laranja") meta += qtd * 50;
      else if (alimento == " brocolis") meta += qtd * 34;
    }

    if (meta > 130) cout << "Menos " << (meta - 130) << " mg" << endl;
    else if (meta < 110) cout << "Mais " << (110 - meta) << " mg" << endl;
    else cout << meta << " mg" << endl;

    meta = 0;
  }
  
  return 0;
}