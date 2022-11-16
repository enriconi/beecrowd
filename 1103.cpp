#include <iostream>

using namespace std;

int main()
{
  int iH, iM, fH, fM, auxH, auxM, aux;

  while (cin >> iH >> iM >> fH >> fM && (iH + iM + fH + fM) > 0) {
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
    
    cout << (auxH * 60) + auxM << endl;
    aux = 0;
  }
  
  return 0;
}