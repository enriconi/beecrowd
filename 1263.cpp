#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{ 
  string s;

  while (getline(cin, s)) {
    int aux = 0, sum = 0;
    istringstream iss(s);
    vector<string> v;
  
    while (iss >> s) {
      v.push_back(s);
    }

    for (int i = 0; i < v.size(); i++) {
      if (i != 0) {
        if ((char) tolower(v[i][0]) == (char) tolower(v[i - 1][0]) && i != (v.size() - 1)) {
          sum++;
        } else if (i == (v.size() - 1)) {
         if ((char) tolower(v[i][0]) == (char) tolower(v[i - 1][0])) sum++;
          if (sum >= 1) {          
            aux++;
            sum = 0;
          }
        } else {
          if (sum >= 1) {          
            aux++;
            sum = 0;
          }
        }
      }
    }

    cout << aux << endl;
  }
  
  return 0;
}