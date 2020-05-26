/*
TASK : LAB4_1
LANG : C++
AUTHOR : Nuttasit Kaewthong
STUDENTID : 59160651
MAJOR : SE
*/
#include <iostream>
using  namespace std;
int main()
{
  int i, s, n;
    cin >> n;
    for(i=0; i<n; i++){
    for(s=0; s<n; s++){
      if(i<=s)
        cout << i-s+n;
      else
        cout << " ";
      }
      cout << endl;
      }
}
