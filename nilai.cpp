/*
    predikat nilai

*/ 

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int nilai;
    string x;

do {
    cout <<"masukkan nilai: " << endl;
    cin  >> nilai;

        if (nilai <= 40 and nilai >= 0) {
            cout << "Predilat nilai: E";
        } else if (nilai <= 60 and nilai >= 41) {
            cout << "Predilat nilai: D";
        } else if (nilai <= 75 and nilai >= 61) {
            cout << "Predilat nilai: C";
        } else if (nilai <= 85 and nilai >= 76) {
            cout << "Predilat nilai: B";
        } else if (nilai <= 100 and nilai >= 86) {
            cout << "Predilat nilai: A";
        } else {
            cout<<"nilai yang anda masukkan salah!"<<endl;
        }
        cout << "\nulangi program? (y/n): " ;
        cin >> x;
        system("cls");
    } while (x == "y" || x == "Y");
    cout <<"terimakasih sudah menggunakan program ini, sampai jumpa!";
}