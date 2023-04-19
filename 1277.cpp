#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    int qtdAlunos;
    string nome;
    
    vector<string> nomes;
    
    int presenca[1000];
    int ausencia[1000];
    int qtdAulas[1000];
    
    memset(presenca, 0, sizeof(presenca));
    memset(ausencia, 0, sizeof(presenca));
    memset(qtdAulas, 0, sizeof(qtdAulas));

    cin >> qtdAlunos;

    for (int j = 0; j < qtdAlunos; j++) {
      cin >> nome;
      nomes.push_back(nome);
    }
    
    for (int j = 0; j < qtdAlunos; j++) {
      string r;
      
      cin >> r;
      qtdAulas[j] = r.size();
      
      for (int k = 0; k < r.size(); k++) {
        if (r[k] == 'P') presenca[j]++;
        else if (r[k] == 'A') ausencia[j]++; 
      }
    }

    bool primeiro = true;
    
    for (int j = 0; j < qtdAlunos; j++) {
      float dividendo = (100 * presenca[j]);
      float divisor = (presenca[j] + ausencia[j]);
      float presencaAluno = (float) (dividendo / divisor);

      if (!primeiro && presencaAluno < 75) cout << " ";
      if (presencaAluno < 75) {
        cout << nomes[j];
        primeiro = false;
      }
    }

    cout << endl;
  }
  
  return 0;
}