/*
TASK : HW1_09
LANG : C++
AUTHOR : Nuttasit Kaewthong
STUDENTID : 59160651
MAJOR : SE
*/
using namespace std;
#include <iostream>
int main()
{
int i, j;
int n;
cin >> n;
for(i=1; i<=n; i++){
for(j=1; j<=i; j++){
cout << " " << j;
}
cout << endl;
}

for(i=n; i>=1; i--){
for(j=1; j<i; j++){
cout << " " << j;
}
cout << endl;
}
return 0;
}
