#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  string n, max = "";

  while (getline(cin, n) && n != "0") {
    string temp = "";

    for (int i = 0; i < n.size(); i++) {
      if (n[i] != ' ') {
        temp.push_back(n[i]);
      } else {
        cout << temp.length() << "-";
        temp = "";
      }

      if (temp.length() >= max.length()) max = temp;
    }

    cout << temp.length() << endl;
  }
  
  cout << endl;
  cout << "The biggest word: " << max << endl;
  
  return 0;
}