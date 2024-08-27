#include <iostream>
using namespace std;

int main(){

    float tGrade=0;
    float avgGrade;
    for(int i=1; i<=5; i++){
        cout << "Enter grade " << i<< ": ";
        int grade;
        cin >> grade;
        tGrade+=grade;
    }
    avgGrade=tGrade/5;
    cout << "The average grade is: " << avgGrade ;

    return 0;
}