#include <iostream>
#include<vector>
using namespace std;
int grid[20][20];

bool CanGo(int n, int m, int new_x, int new_y){
  if(0 <= new_x && new_x < n && \
      0 <= new_y && new_y < m) {
    return true;
  }
  else {
    return false;
  }
}

int calculateRectangle(int x, int y, int first_side, int second_side){
  int dx[4] = {-1, -1, 1, 1}, dy[4] = {1, -1, -1, 1};
  int x_curr=x, y_curr=y, d, sum=0, i=0;
  while(1){
    if(i<first_side) d = 0;
    else if(i<first_side+second_side) d = 1;
    else if(i<first_side*2+second_side) d = 2;
    else d = 3;
    x_curr += dx[d];
    y_curr += dy[d];
    sum += grid[x_curr][y_curr];
    i++;
    if(i == 2*(first_side+second_side)) break;
    //cout << d << ' ' << i << ' ' << x_curr << ' ' << y_curr << ' ' << grid[x_curr][y_curr] << ' ' << sum << endl;
  }
  return sum;
}

int main( ) {
  int n;
  cin >> n;
  int max = 0;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> grid[i][j];
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      for(int k=1;k<=n-2;k++){
        for(int l=1;l<=n-2;l++){
          if(!(CanGo(n,n,i-k,j+k) && CanGo(n,n,i-k-l,j+k-l) && CanGo(n,n,i-l,j-l))) break;
          //cout << i << ' ' << j << ' ' << k << ' ' << l << endl;
          int sum = calculateRectangle(i,j,k,l);
          // cout << sum << endl;
          if(sum > max) max = sum;
        }
      }
    }
  }

  cout << max;
}
