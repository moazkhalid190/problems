// problem D.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

void Digits(int n) {
    
    if (n == 0)
        return;
    Digits(n / 10);

    cout << (n % 10) << " ";
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        if (N == 0)
        {
            cout<<0;
        }
        else{
        Digits(N);
       }
        cout << endl;
    }
    return 0;
}