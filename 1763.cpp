#include <iostream>
#include <map>

using namespace std;

int main()
{

  map<string, string> p;

  p["brasil"] = "Feliz Natal!";
  p["portugal"] = "Feliz Natal!";
  p["alemanha"] = "Frohliche Weihnachten!";
  p["austria"] = "Frohe Weihnacht!";
  p["coreia"] = "Chuk Sung Tan!";
  p["espanha"] = "Feliz Navidad!";
  p["argentina"] = "Feliz Navidad!";
  p["chile"] = "Feliz Navidad!";
  p["mexico"] = "Feliz Navidad!";
  p["grecia"] = "Kala Christougena!";
  p["estados-unidos"] = "Merry Christmas!";
  p["inglaterra"] = "Merry Christmas!";
  p["australia"] = "Merry Christmas!";
  p["inglaterra"] = "Merry Christmas!";
  p["antardida"] = "Merry Christmas!";
  p["canada"] = "Merry Christmas!";
  p["suecia"] = "God Jul!";
  p["turquia"] = "Mutlu Noeller";
  p["irlanda"] = "Nollaig Shona Dhuit!";
  p["belgica"] = "Zalig Kerstfeest!";
  p["italia"] = "Buon Natale!";
  p["libia"] = "Buon Natale!";
  p["siria"] = "Milad Mubarak!";
  p["marrocos"] = "Milad Mubarak!";
  p["japao"] = "Merii Kurisumasu!";
  
  string n;

  while (cin >> n) {
    if (p[n].empty()) cout << "--- NOT FOUND ---" << endl;
    else cout << p[n] << endl;
  }
    
  return 0;
}