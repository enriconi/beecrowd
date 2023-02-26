#include <iostream>
#include <map>

using namespace std;

int main()
{
  string s, aux;
  map<string, string > mapS;

  while (getline(cin, s)) {
    aux = s;
    for (int i = 0; i < s.size(); i++) aux[i] = tolower(aux[i]);
    mapS[aux] = s;
  }

  auto it = mapS.end();
  it--;
  
  cout << it->second << endl;
  
  return 0;
}