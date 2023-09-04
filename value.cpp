#include<iostream>
using namespace  std;
int main(){

    int a; 
    int b ;
    // int c = 0;
    cout << "enter the value of a : " ,a ;
    cin >> a;

    cout << "enter the value of  b : " , b;
    cin >> b;
    int c;
    c = b;
    b = a;
    a = c;
  

    cout << "final value a  is " <<a<<endl  ;
    cout << "final value b is " <<b<<endl  ;

    return 0;


}