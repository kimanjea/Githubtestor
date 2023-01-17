#include <iostream>
#include <string>

using namespace std;
 double addfunc (int n, int v) {
     return n+v;
 }

int main() {
    int num;
    int num2;
  //  std::cout << "Hello, World!" << std::endl;

    string food;
    cout << "Enter a food name" << endl;
    cin >> food;

    cout << "enter food number ";
    cin >>num;
    cin >>num2;
    num = addfunc(num,num2 );

    //let s got
    cout << food;
    cout << " you food adds up to =  " << num << endl;
    return 0;
}
