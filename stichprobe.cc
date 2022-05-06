#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

double a , b, c, d ,e ,f;

int Mittelwert(){
  ifstream fin ("datensumme.txt");
  for (int i = 0; i<234 ;i++){
    fin >> a;
    b +=a;
  }
  c = b/234;
  cout << c << endl;
  fin.close();
}

int Varianz(){
  ifstream fin ("datensumme.txt");
  for (int i = 0; i<234 ;i++){
  fin >> d;
  e += (d-c) * (d-c);
  }
  f = e/234; 
  cout << f << endl;
  fin.close();
}

int Standartabweichung(){
  cout << sqrt(f) << endl;
}

int main(){
Mittelwert();
c = b/234;
Varianz();
f = e/234;
Standartabweichung();
}