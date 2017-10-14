#include <iostream>
#include <string>
using namespace std;

main ()
{
  string input;
  int i;
  getline(cin, input);
  for (i=0;i < input.size();i++){
    if (input[i] < 65 || input[i] >90){
        cout << char(input[i]);
    }else if (input[i]+10 > 90){
        cout << char(input[i]-16);    
    }else{
        cout << char(input[i]+10);
    }
  }
  cout << "\n";
}