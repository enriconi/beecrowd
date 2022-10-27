#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  string n, condicao;

  getline(cin, n);

  condicao = n.length() <= 80 ? "YES" : "NO";
  
  cout << condicao << endl;

  return 0;
}