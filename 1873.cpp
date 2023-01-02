#include <iostream>

using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    string s, r;

    cin >> s >> r;

    if (s == "tesoura" && r == "papel") cout << "rajesh" << endl;
    else if (r == "tesoura" && s == "papel") cout << "sheldon" << endl;
      
    else if (s == "papel" && r == "pedra") cout << "rajesh" << endl;
    else if (r == "papel" && s == "pedra") cout << "sheldon" << endl;

    else if (s == "pedra" && r == "lagarto") cout << "rajesh" << endl;
    else if (r == "pedra" && s == "lagarto") cout << "sheldon" << endl;
    
    else if (s == "lagarto" && r == "spock") cout << "rajesh" << endl;
    else if (r == "lagarto" && s == "spock") cout << "sheldon" << endl;

    else if (s == "spock" && r == "tesoura") cout << "rajesh" << endl;
    else if (r == "spock" && s == "tesoura") cout << "sheldon" << endl;

    else if (s == "tesoura" && r == "lagarto") cout << "rajesh" << endl;
    else if (r == "tesoura" && s == "lagarto") cout << "sheldon" << endl;

    else if (s == "lagarto" && r == "papel") cout << "rajesh" << endl;
    else if (r == "lagarto" && s == "papel") cout << "sheldon" << endl;

    else if (s == "lagarto" && r == "papel") cout << "rajesh" << endl;
    else if (r == "lagarto" && s == "papel") cout << "sheldon" << endl;

    else if (s == "papel" && r == "spock") cout << "rajesh" << endl;
    else if (r == "papel" && s == "spock") cout << "sheldon" << endl;

    else if (s == "spock" && r == "pedra") cout << "rajesh" << endl;
    else if (r == "spock" && s == "pedra") cout << "sheldon" << endl;

    else if (s == "pedra" && r == "tesoura") cout << "rajesh" << endl;
    else if (r == "pedra" && s == "tesoura") cout << "sheldon" << endl;
    else cout << "empate" << endl;
  }

  return 0;
}