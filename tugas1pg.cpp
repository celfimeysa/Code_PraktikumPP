#include <iostream>
using namespace std; 

int main() {
  cout << "formasi 1" << endl;
  for(int i = 1; i < 6; i++){
    for(int j = 1; j < 6 - i;j++){
      cout << ' ';
    }
    for(int j = 0; j < i;j++){
      cout << '*';
    }
    cout << endl;
      }
  
  cout << "formasi 2" << endl;
  for(int i = 5; i > 0; i--){
    for(int j = 0; j < i; j++){
      cout << '*';
    }
    cout << endl;
  }
  
 cout << "formasi 3" << endl;
  for(int i = 1; i < 6; i++){
    for(int j = 0; j < 6 - i; j++){
      cout << ' ';
    }
    
  for(int k = 0; k < 2*i-1; k++){
    cout << '*';
  }
    cout << endl;
  }
}

  
