#include <iostream>
using namespace std;

int main() {
  int angka1, angka2;
  char operasi;
  
  cout << "masukkan angka pertama : ";
  cin >> angka1;
  cout << "masukkan angka kedua : ";
  cin >> angka2;
  cout << "masukkan jenis operasi (+, -, *, /) : ";
  cin >> operasi;
  
  if (operasi == '+') {
    cout << "hasil = " << angka1 + angka2;
  } else if (operasi == '-') {
    cout << "hasil = " << angka1 - angka2;
  } else if (operasi == '*') {
    cout << "hasil = " << angka1 * angka2;
  } else if (operasi == '/') {
    if (angka2 =! 0) {
    cout << "hasil = " << angka1 / angka2;
  } else {
      cout << "pembagian tidak boleh bernilai 0";
  }
  } else {
     
      cout << "operasi tidak valid";
    }
     
     return 0;
}