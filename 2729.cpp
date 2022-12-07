#include <iostream>
#include <sstream>
#include <set>

using namespace std;

int main()
{
  int n;
  string s;

  cin >> n;
  cin.get();

  for (int i = 0; i < n; i++) {
    getline(cin, s);

    istringstream iss(s);
    set<string> words;
    string aux;
  
    while (iss >> aux) {
      words.insert(aux);
    }

    auto word = words.begin();
    for (int i = 0; i < words.size(); word++, i++) {
      if (i != words.size() - 1) cout << *word << " ";
      else cout << *word << endl;
    }
  }
  
  return 0;
}