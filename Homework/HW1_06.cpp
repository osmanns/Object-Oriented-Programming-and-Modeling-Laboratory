/*
TASK : HW1_06
LANG : C++
AUTHOR : Nuttasit Kaewthong
STUDENTID : 59160651
MAJOR : SE
*/
using namespace std;
#include <iostream>
int main()
{
int i, n, min = 0, max = 0;
int A[1000]={0};
do{
cin >> n;
}while(n < 1 || n > 1000);
for(i=0;i<n;i++){
cin >> A[i];
if(i == 0){
min = A[0];
max = A[0];
}
if(A[i] > max){
max = A[i];
}
if(A[i] < min){
min = A[i];
}
}
cout<< min << endl;
cout<< max << endl;
}
