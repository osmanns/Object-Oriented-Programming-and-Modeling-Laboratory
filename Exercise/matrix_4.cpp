/*
TASK : LAB4_4
LANG : C++
AUTHOR : Nuttasit Kaewthong
STUDENTID : 59160651
MAJOR : SE
*/
#include <iostream>
using namespace std;

int main()
{
  int m, n;
  int i, j;
  int m1[99][99];

  cin >> m >> n;
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      cin >> m1[i][j];
    }
  } 
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
       if(i!=j){
       	if(m1[i][j]==0){
       		cout << "true" ; return 0;
        }
       	else{
       	    cout << "false" ; return 0;
        }
       }
    }
  }
return 0;
}

