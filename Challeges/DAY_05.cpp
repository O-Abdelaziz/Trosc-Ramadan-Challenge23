#include <bits/stdc++.h>
 
using namespace std;

// this code to get the binary representation of decimal number 
 
string DecimaltoBinary(int num){
    string Bin;
    while(num){
    Bin.push_back((num % 2)+'0');
      num /= 2;
    }
         
  
    reverse(Bin.begin(), Bin.end());
  
    return Bin;
}
 
int main(){
    int n;
    cin >> n;
    cout << DecimaltoBinary(n);
    return 0;
}

// what is the wrong in the code ??

// Before adding the integer remainder to the binary string, we must convert it to a character, Adding the Ascii value 0 to the remaining values is one approach.
