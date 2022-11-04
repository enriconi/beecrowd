#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << fixed << setprecision(1);
  float a, b, c, d, e, calculo;

  cin >> a >> b >> c >> d;

  calculo = (a * 0.2 + b * 0.3 + c * 0.4 + d * 0.1);

  cout << "Media: " << calculo << endl;
  
  if (calculo >= 7) {
    cout << "Aluno aprovado." << endl;
  } else if (calculo < 5) {
    cout << "Aluno reprovado." << endl;
  } else {
    cout << "Aluno em exame." << endl;

    cin >> e;

    cout << "Nota do exame: " << e << endl;

    if ((calculo + e) / 2 >= 5) {
      cout << "Aluno aprovado." << endl;
    } else {
      cout << "Aluno reprovado." << endl;
    }

    cout << "Media final: " << (calculo + e) / 2.0 << endl;
  }

  return 0;
}