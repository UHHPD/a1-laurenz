#include <iostream>
#include <fstream>

int main(){
  std::ifstream paar("daten.txt");
  float a;
  float b;
  std::ofstream fout ("datensumme.txt");
  
   for(int n = 1; n <= 234; n++) {
     paar >> a;
     paar >> b;
     fout << a + b << std::endl;
     //std::cout << a + b << std::endl;
     }
  //fin.close();
  fout.close();
}