/*
TASK : HW1_05
LANG : C++
AUTHOR : Nuttasit Kaewthong
STUDENTID : 59160651
MAJOR : SE
*/
using namespace std;
#include <iostream>
int main()
{
int a, b, c;
cin >> a >> b >> c;
if(a == b && b == c && c == a){
cout << "all the same" << endl;
}
else if(a != b && b != c && c != a){
cout << "all different" << endl;
}
else
cout << "neither" << endl;
return 0;
}
