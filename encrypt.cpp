#include <iostream>
#include <string>
using namespace std;

main ()
{
    // algo :
    // 1. masukan input 
    // 2. jika ascii input <65 dan >90 (ASCII A-Z terletak di 65-90)
    // 3. maka print biasa
    // 4. selain itu, jika ASCII input+10>90 (10 abjad terakhir)
    // 5. maka ASCII dikurangi 16 (16 didapat dari -26+10, abjad Z di ASCII adalah 90, maka 90-26+10 = 90-16)
    // 6. tambahan, maka abjad terakhir dimulai dari Q, yang mana asciinya adalah 81, maka akan menjadi A dengan hasil 81-16 = 65 (A)
    // 7. selain itu maka dicetak dengan penambahan nilai ASCII +10

  string input;
  int i;
  getline(cin, input);
  for (i=0;i < input.size();i++){
    if (input[i] < 65 || input[i] >90){
        cout << char(input[i]);
    }else if (input[i] > 80){
        cout << char(input[i]-16);    
    }else{
        cout << char(input[i]+10);
    }
  }
  cout << "\n";
}