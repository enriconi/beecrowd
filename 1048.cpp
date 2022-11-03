#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << fixed << setprecision(2);
  
  double n;

  cin >> n;
  
  if (n <= 400) {
    cout << "Novo salario: " << (n * 1.15) << endl;
    cout << "Reajuste ganho: " << (n * 0.15) << endl;
    cout << "Em percentual: 15 %" << endl;
  } else if (n > 400 && n <= 800) {
    cout << "Novo salario: " << (n * 1.12) << endl;
    cout << "Reajuste ganho: " << (n * 0.12) << endl;
    cout << "Em percentual: 12 %" << endl;
  } else if (n > 800 && n <= 1200) {
    cout << "Novo salario: " << (n * 1.10) << endl;
    cout << "Reajuste ganho: " << (n * 0.10) << endl;
    cout << "Em percentual: 10 %" << endl;
  } else if (n > 1200 && n <= 2000) {
    cout << "Novo salario: " << (n * 1.07) << endl;
    cout << "Reajuste ganho: " << (n * 0.07) << endl;
    cout << "Em percentual: 7 %" << endl;
  } else {
    cout << "Novo salario: " << (n * 1.04) << endl;
    cout << "Reajuste ganho: " << (n * 0.04) << endl;
    cout << "Em percentual: 4 %" << endl;
  }

  return 0;
}