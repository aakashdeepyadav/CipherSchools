#include <iostream>
using namespace std;

int main(){
    string str1, str2, str3;
    cout << "Enter the first string : " ;
    cin >> str1 ;    
    cout << "Enter the second string : " ;
    cin >> str2 ;

    str3=str1 + str2 ;
    cout << "Concatenated string:" << str3 ;
    return 0;
}