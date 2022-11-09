#include <iostream>

using namespace std;

int main()
{
  string n;

  getline(cin, n);

  if (n == "acre" || n == "amapa" || n == "amazonas" || n == "para" || n == "rondonia" || n == "roraima" || n == "tocantins") cout << "Regiao Norte" << endl;
  else cout << "Outra regiao" << endl;
  
  return 0;
}