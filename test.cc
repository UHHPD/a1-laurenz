#include <iostream>
#include <fstream>

int main(){
  std::ifstream a("test.txt");
  float b;
  float c;
  a >> b;
  std::cout << b << std::endl;
  a >> b;
  //a >> b;
  //a >> b;
  std::cout << b << std::endl;
  //a.close();
  a >> c;
  std::cout << c << std::endl;
  //while(! fin.eof()) {
    //fin >> b;
    
  //}
  //a.close();
  
}