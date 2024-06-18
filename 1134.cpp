#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, alcohol = 0, gasoline = 0, diesel = 0;
  while (cin >> n && n != 4) {
    if (n == 1) alcohol++;
    if (n == 2) gasoline++;
    if (n == 3) diesel++;
  }
  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " << alcohol << endl;
  cout << "Gasolina: " << gasoline << endl;
  cout << "Diesel: " << diesel << endl;

  return 0;
}