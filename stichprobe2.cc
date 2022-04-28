#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

double a , b, c, d ,e ,f;

int Mittelwert(){
  ifstream fin ("datensumme.txt");
  ofstream fout ("mittelwerte.txt"); 
  for (int j = 0; j<26 ;j++){
    for (int i = 0; i<9 ; i++){
      fin >> a;
      b +=a;
    }
    c = b/9;
    cout << c << endl;
    fout << c << endl;
    b = 0;
  }
  fout.close();
  fin.close();
}

int Varianz(){
  ifstream fin ("datensumme.txt");
  ifstream fin2 ("mittelwerte.txt");
  ofstream fout ("varianzen.txt");
  for (int j = 0; j<26 ;j++){
    for (int i = 0; i<9 ;i++){
      fin >> d;
      fin2 >> c;
      e += (d-c) * (d-c);
    }
    f = e/9; 
    cout << f << endl;
    fout << f << endl;
    e = 0; 
  }
  fout.close();
  fin.close();
  fin2.close();
}

int Standartabweichung(){
  cout << sqrt(f) << endl;
}

int main(){
  Mittelwert();
  Varianz();
  Standartabweichung();
}
