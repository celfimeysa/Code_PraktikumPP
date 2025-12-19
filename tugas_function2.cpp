#include <iostream>
using namespace std;

// menghitung hasil kuadrat bilangan
int kuadrat(int x){
  return x * x;
}

// menghitung hasil kubik bilangan
int kubik(int x){
  return x * x * x;
}

// menghitung hasil faktorial bilangan
int faktorial(int n){
  if( n == 0) return 1;
 else 
  return n*faktorial(n-1);
}

int main (){
  int n;
  
//   untuk menampilkan perintah memasukkan angka
  cout << "masukkan bilangan bulat: ";
  cin >> n;
  
//   untuk menampilkan hasil dari perhitungan
    cout << "hasil kuadrat dari " << n << " = " << kuadrat(n) << endl;
  cout << "hasil kubik dari " << n << " = " << kubik(n) << endl;
  cout << "hasil faktorial dari " << n << " = " << faktorial(n) << endl;
  
  return 0;
}