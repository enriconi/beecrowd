#include <iostream>
using namespace std;

int main()
{
  int a, b, leds;
  char n[100];

  cin >> a;

  for (int i = 0; i < a; i++)
  {
    cin >> n;
    b = 0;
    leds = 0;

    while (true)
    {
      if (n[b] == '\0')
        break;
      if (n[b] == '1')
        leds += 2;
      if (n[b] == '2')
        leds += 5;
      if (n[b] == '3')
        leds += 5;
      if (n[b] == '4')
        leds += 4;
      if (n[b] == '5')
        leds += 5;
      if (n[b] == '6')
        leds += 6;
      if (n[b] == '7')
        leds += 3;
      if (n[b] == '8')
        leds += 7;
      if (n[b] == '9')
        leds += 6;
      if (n[b] == '0')
        leds += 6;
      b++;
    }

    cout << leds << " leds" << endl;
  }

  return 0;
}