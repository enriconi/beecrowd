#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{ 
  string s;

  while (getline(cin, s) && s != "*") {
    bool b = true;
    istringstream iss(s);
    vector<string> v;

    while (iss >> s) {
      v.push_back(s);
    }

    for (int i = 0; i < v.size(); i++) {
      if (v.size() == 1) b = true;
      
      if (i != 0) {
        if ((char) tolower(v[i][0]) == (char) tolower(v[i - 1][0])) {
          b = true;
        } else {
          b = false;
          break;
        }
      }
    }

    if (b) cout << "Y" << endl;
    else cout << "N" << endl;
  }
  
  return 0;
}