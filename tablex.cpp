#include <iostream>
#include <string>
using namespace std;

main ()
{
  int input;
  cin >> input;
  for (int i=1;i<=input;i++){
      for (int j=1;j<=input;j++){
          cout << i*j << "\t";
      }
      cout << "\n";
  }
}