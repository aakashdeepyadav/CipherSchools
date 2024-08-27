#include <iostream>
using namespace std;

int main(){
    int N;
    int factorial=1;
    cout << "Enter a number: ";
    cin >> N;

    for(int i=N; i>=1; i--){
        factorial*=i;
    }

    cout << "The factorial of " << N << " is : " << factorial ;
    return 0;
}