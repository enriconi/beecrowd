#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
  int n;
  float sumF = 0.0, sumP = 0.0;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    double d;
    string s;
    int kg;
    
    cin >> d;
    cin.ignore();
    getline(cin, s);

    sumP += d;

    istringstream iss(s);

    while (iss >> s) {
      sumF++;
      kg++;
    }

    cout << "day " << i << ": " << kg << " kg" << endl;
    kg = 0;
  }

  cout << fixed << setprecision(2);
  cout << (sumF / n) << " kg by day" << endl;
  cout << "R$ " << (sumP / n) << " by day" << endl;
  
  return 0;
}