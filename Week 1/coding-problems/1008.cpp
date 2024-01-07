#include <iostream>
using namespace std;

//link: https://www.acmicpc.net/problem/1008

int main(){
    cout.setf(ios::fixed); cout.precision(10);
    int a, b;
    cin >> a >> b;
    cout << (long double)(a)/(long double)(b);
}