/*
TASK : HW1_02
LANG : C++
AUTHOR : Nuttasit Kaewthong
STUDENTID : 59160651
MAJOR : SE
*/
using namespace std;
#include <iostream>
int main()
{
int price;
cin >> price;
if(price <= 1000){
cout << price << endl;
}
else if(price <= 2000){
price = price - (price * 0.05);
cout << price << endl;
}
else if(price <= 5000){
price = price - (price * 0.10);
cout << price << endl;
}
else if(price <= 10000){
price = price - (price * 0.15);
cout << price << endl;
}
else if(price >= 10001){
price = price - (price * 0.20);
cout << price << endl;
}
return 0;
}
