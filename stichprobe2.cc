#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

double a , b, c, d ,e ,f;
ifstream fin ("datensumme.txt")

int Mittelwert(){
  for (int i = 0; i<9 ; i++){
    fin >> a;
    b +=a;
  }
  c = b/9;
  cout << c << endl;
  fout << c << endl;
  b = 0;
}

int Varianz(){
    for (int i = 0; i<9 ;i++){
      fin2 >> d;
      e += (d-c) * (d-c);
  }
  f = e/9; 
  cout << f << endl;
  e = 0; 
}

int Standartabweichung(){
  cout << sqrt(f) << endl;
}

int main(){
  ifstream fin ("datensumme.txt");
  ifstream fin2 ("datensumme.txt");
  ofstream fout ("mittelwerte.txt"); 
  ofstream fout2 ("varienzen.txt");
  for (int j = 0; j<26; j++){
    Mittelwert();
      fout << c << endl;
    Varianz();
      fout2 << c << endl;
    Standartabweichung();
  }
  fin.close();
  fin2.close(); 
  fout.close(); 
  fout2.close();
}