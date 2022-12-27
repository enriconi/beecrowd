#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int n, qtd;
  int coelhos = 0, ratos = 0, sapos = 0;
  char c;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> qtd >> c;

    if (c == 'R') ratos += qtd;
    else if (c == 'C') coelhos += qtd;
    else sapos += qtd;
  }

  int total = (ratos + sapos + coelhos);

  cout << fixed << setprecision(2);
  cout << "Total: " << total << " cobaias" << endl;
  cout << "Total de coelhos: " << coelhos << endl;
  cout << "Total de ratos: " << ratos << endl;
  cout << "Total de sapos: " << sapos << endl;
  cout << "Percentual de coelhos: " << (((float) coelhos / (float) total) * 100) << " %" << endl;
  cout << "Percentual de ratos: " << ((float) ratos / (float) total) * 100 << " %" << endl;
  cout << "Percentual de sapos: " << ((float) sapos / (float) total) * 100 << " %" << endl;

  return 0;
}