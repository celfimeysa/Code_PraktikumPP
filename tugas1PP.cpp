#include <iostream>
using namespace std;

int main() {
  double panjang, lebar, luas;
  
  cout << "masukkan panjang: ";
  cin >> panjang;
  cout << "masukkan lebar: ";
  cin >> lebar;
  
  luas = panjang * lebar;
  
  cout << "luas persegi panjang = " << luas << endl;
  
  return 0;
}