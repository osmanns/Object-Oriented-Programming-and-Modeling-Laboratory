/*
TASK : HW1_03
LANG : C++
AUTHOR : Nuttasit Kaewthong
STUDENTID : 59160651
MAJOR : SE
*/
using namespace std;
#include <iostream>
int main()
{
int a;
do{
cin >> a;
}while(a < 1000 || a > 9999);
do{
cout << a % 10;
a = a / 10;
}while(a > 0);
return 0;
}
