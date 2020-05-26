#include <iostream>
using namespace std;

int sumAtCol(int arr[100][100], int row, int col, int at);

int arr[100][100], row, col, at, i ,j, result;

int main() 
{
    result = sumAtCol(arr, row, col, at);
    cout << result;
return 0;
}

int sumAtCol ( int arr[100][100], int row, int col, int at) 
{
  cin >> row >> col;
  for(i=0; i<row; i++){
    for(j=0; j<col; j++){
    cin >>  arr[i][j];
    }
  }
  cin >> at;
  if(at >= col || at < 0){
  result = -1;
  }
  else{
    for(i=0; i<row; i++){
      for(j=at; j<=at; j++){
        result += arr[i][at];
      }
    }
  }
return result;
}
   
 


 


 


 


 


 


 
