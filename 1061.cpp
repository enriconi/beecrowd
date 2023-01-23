#include <iostream>

using namespace std;

int main()
{
  string auxD, p;
  int dI, dF, hI, hF, mI, mF, sI, sF;

  cin >> auxD >> dI;
  cin >> hI >> p >> mI >> p >> sI;
  cin >> auxD >> dF;
  cin >> hF >> p >> mF >> p >> sF;

  long long int aux = (((dF * 86400) + (hF * 3600) + (mF * 60) + sF) -  ((dI * 86400) + (hI * 3600) + (mI * 60) + sI));

  cout << (aux / 86400) << " dia(s)" << endl;
  cout << ((aux % 86400) / 3600) << " hora(s)" << endl;
  cout << ((aux % 86400 % 3600) / 60) << " minuto(s)" << endl;
  cout << (aux % 86400 % 3600 % 60) << " segundo(s)" << endl;

  return 0;
}