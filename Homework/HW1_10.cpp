/*
TASK : HW1_10
LANG : C++
AUTHOR : Nuttasit Kaewthong
STUDENTID : 59160651
MAJOR : SE
*/
using namespace std;
#include <iostream>
int main()
{
int i, n, s, t;
cin >> n;
for(i = 1; i <= n; i++){
for(s = n; s >= i; s--){
cout << " ";
}
for(t = 0; t <= s*2; t++){
cout << "*";
}
cout << endl;
}

return 0;
}
