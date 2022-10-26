#include <iostream>

using namespace std;

int main()
{
  int iH, iM, fH, fM, auxH, auxM, aux;

  cin >> iH >> iM >> fH >> fM;

  if (fM >= iM) {  
    if (iH == fH && fM == iM) auxH = 24;
    if (iH == fH && fM != iM) auxH = 0;
    if (iH < fH) auxH = fH - iH;
    if (iH > fH) auxH = (24 - iH) + fH;
    auxM = fM - iM;
  } else {
    aux = fM - iM;
    auxM = 60 + aux;
    if (iH == fH) auxH = 24 - 1;
    if (iH < fH) auxH = fH - iH - 1;
    if (iH > fH) auxH = (24 - iH) + fH - 1;
  }

  cout << "O JOGO DUROU " << auxH << " HORA(S) E " << auxM << " MINUTO(S)" << endl;

  return 0;
}