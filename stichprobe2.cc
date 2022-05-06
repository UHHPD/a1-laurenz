#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

double a , b, c, d, e, f, g, h, k, l;

int Mittelwert(){
  ifstream fin ("datensumme.txt");
  ofstream fout ("mittelwerte.txt"); 
  for (int j = 0; j<26 ;j++){
    for (int i = 0; i<9 ; i++){
      fin >> a;
      b +=a;
    }
    c = b/9;
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
    fout2 << f << endl;
    g += f;
    }
  fin.close();
  fin2.close();
  fout2.close();
  }

int Mittelwerte2(){
  ifstream fin("mittelwerte.txt");
  ifstream fin2("varianzen.txt");
  for(int i = 0; i<26; i++){
    fin >> g;
    fin2 >> k;
    h += g;
    l += k;
  }
  h /= 26;
  l /= 26;
  cout << h << endl;
  cout << l << endl;
}

int main(){
Mittelwert();
Varianz();
Mittelwerte2();
}
