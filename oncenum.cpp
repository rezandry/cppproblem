#include<iostream>
#include<string>
using namespace std;

main(){
    string num;
    int* a;
    int n;
    int i, j;
    int arrayIndex = 0;
    a = new int[n];
    cin >> num;
    for (i=0;i<num.size();i++){
        int found = 0;
        for (j=i+1;j<num.size();j++){
            if (num[i] == num[j]){
                found++;
            }
        }
        if (found == 0){
            a[arrayIndex] = num[i];
            arrayIndex++;
        }
    }
    cout << char(*a);
}