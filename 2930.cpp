#include <iostream>

using namespace std;

int main()
{
  int a, b;

  cin >> a >> b;

  if (a > b) {
    cout << "Eu odeio a professora!" << endl;
  } else if ((b - a) >= 3) {
    cout << "Muito bem! Apresenta antes do Natal!" << endl;
  } else if ((a + 2) < 24) {
    cout << "Parece o trabalho do meu filho!" << endl;
    cout << "TCC Apresentado!" << endl;
  } else {
    cout << "Parece o trabalho do meu filho!" << endl;
    cout << "Fail! Entao eh nataaaaal!" << endl;
  }
    
  return 0;
}