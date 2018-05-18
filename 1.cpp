// Example program
#include <iostream>
#include <cstdoi>
#include <cstdlib>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    
    cin >> a >> endl;
    cin >> b >> endl;
    cin >> c >> endl;
    
    if (a < b) {
        if (a < c) {
            if (b < c) {
                cout << a << "<" << b << "<" << c << endl;
            }
            else {
                cout << a << "<" << c << "<" << b << endl;
            }
        else {
            cout << c << "<" << a << "<" << b << endl;
        }
    else {
        if (a < c) {
            cout << b << "<" << a << "<" << c << endl;
        }
        else {
           if (b < c) {
               cout << b << "<" << c << "<" << a << endl;
           }
           else {
               cout << c << "<" << b << "<" << a << endl;
        }         
}
