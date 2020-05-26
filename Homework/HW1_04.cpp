/*
TASK : HW1_04
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
}while(a < 1 || a > 20000 );
if(a >= 10){
a = (a/10) * 2;
cout << a << endl;
}
else if(a < 10){
cout << 0 << endl;
}
}
