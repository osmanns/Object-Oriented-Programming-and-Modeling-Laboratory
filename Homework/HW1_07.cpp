/*
TASK : HW1_07
LANG : C++
AUTHOR : Nuttasit Kaewthong
STUDENTID : 59160651
MAJOR : SE
*/
using namespace std;
#include <iostream>
int main()
{
int i, j, high, l;
cin >> high;
cin >> l;
for(i=1;i<=high;i++){
for(j=1;j<=l;j++){
	if(i==1 || j == 1 || j == l || i==high)
cout << "*";
else 
cout << " ";
}
cout << endl;
}
}

