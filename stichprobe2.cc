#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

double a , b, c, d, e, f, g;

int Mittelwert(){
  ifstream fin ("datensumme.txt");
  ofstream fout ("mittelwerte.txt"); 
  for (int j = 0; j<26 ;j++){
    for (int i = 0; i<9 ; i++){
      fin >> a;
      b +=a;
    }
    c = b/9;
    //cout << c << endl;
    fout << c << endl;
    b = 0;
  }
  fin.close(); 
  fout.close();
}

int Varianz(){
  ifstream fin ("datensumme.txt");
  ifstream fin2 ("mittelwerte.txt");
  ofstream fout2 ("varianzen.txt");
  for (int j = 0; j<26; j++){
    fin2 >> c;
    for (int i = 0; i<9; i++){
      fin >> d;
      e += (d-c) * (d-c);
    }
    f = e/9; 
    e = 0;
    //cout << f << endl;
    fout2 << f << endl;
    g += f;
    }
  //cout << g/26 << endl;
  fin.close();
  fin2.close();
  fout2.close();
  }

int Standartabweichung(){
  cout << sqrt(f) << endl;
}

int main(){
Mittelwert();
Varianz();
Standartabweichung();
}
