#include <iostream>

using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    string s, r;

    cin >> s >> r;

    cout << "Caso #" << i << ": ";

    if (s == "tesoura" && r == "papel") cout << "Bazinga!" << endl;
    else if (r == "tesoura" && s == "papel") cout << "Raj trapaceou!" << endl;
      
    else if (s == "papel" && r == "pedra") cout << "Bazinga!" << endl;
    else if (r == "papel" && s == "pedra") cout << "Raj trapaceou!" << endl;

    else if (s == "pedra" && r == "lagarto") cout << "Bazinga!" << endl;
    else if (r == "pedra" && s == "lagarto") cout << "Raj trapaceou!" << endl;
    
    else if (s == "lagarto" && r == "Spock") cout << "Bazinga!" << endl;
    else if (r == "lagarto" && s == "Spock") cout << "Raj trapaceou!" << endl;

    else if (s == "Spock" && r == "tesoura") cout << "Bazinga!" << endl;
    else if (r == "Spock" && s == "tesoura") cout << "Raj trapaceou!" << endl;

    else if (s == "tesoura" && r == "lagarto") cout << "Bazinga!" << endl;
    else if (r == "tesoura" && s == "lagarto") cout << "Raj trapaceou!" << endl;

    else if (s == "lagarto" && r == "papel") cout << "Bazinga!" << endl;
    else if (r == "lagarto" && s == "papel") cout << "Raj trapaceou!" << endl;

    else if (s == "lagarto" && r == "papel") cout << "Bazinga!" << endl;
    else if (r == "lagarto" && s == "papel") cout << "Raj trapaceou!" << endl;

    else if (s == "papel" && r == "Spock") cout << "Bazinga!" << endl;
    else if (r == "papel" && s == "Spock") cout << "Raj trapaceou!" << endl;

    else if (s == "Spock" && r == "pedra") cout << "Bazinga!" << endl;
    else if (r == "Spock" && s == "pedra") cout << "Raj trapaceou!" << endl;

    else if (s == "pedra" && r == "tesoura") cout << "Bazinga!" << endl;
    else if (r == "pedra" && s == "tesoura") cout << "Raj trapaceou!" << endl;
    else cout << "De novo!" << endl;
  }

  return 0;
}