#include <iostream>
using namespace std;
int main()
{
  int m, n;
  int i, j, x, y;
  int m1[99][99];

  cin >> m >> n;
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      cin >> m1[i][j];
    }
  }
  cin >> x >> y;
    if((m1[x-1][y]==1&&m1[x+1][y])||(m1[x][y-1]==1&&m1[x][y+1]))
      cout << "true";
    else
      cout << "false";

return 0;
}

