#include <iostream>
#include <string>
using namespace std;

void cetak_perkalian(int);

main ()
{
    // Algo :
    // 1. masukkan input 
    // 2. untuk setiap bari ke i, dan kolom j, 
    // 3. cetak i*j 

  int input;
  cin >> input;
  cetak_perkalian(input);
}

void cetak_perkalian (int input){
    for (int i=1;i<=input;i++){
        for (int j=1;j<=input;j++){
            cout << i*j << "\t";
        }
        cout << "\n";
    }
}