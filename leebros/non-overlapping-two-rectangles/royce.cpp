#include <iostream>
#include<vector>
#define MIN -25000
using namespace std;
int grid[5][5];
int subsum[5][5][5];

void printSubsum(int n,int m){
  for(int l=0;l<m;l++){
    for(int x=0;x<n;x++){
      for(int r=0;r<m;r++){
        cout << subsum[l][r][x] << ' ';
      }
      cout << endl;
    }
    cout << endl;
  }
}

int findMaxRectangle(int s_x, int s_y, int e_x, int e_y){
  int max = MIN;
  for(int l=s_y;l<e_y;l++){
    for(int r=l;r<e_y;r++){
      for(int i=s_x;i<e_x;i++){
        for(int j=i;j<e_x;j++){
          int temp = subsum[l][r][j] - (i > 0 ? subsum[l][r][i-1] : 0);
          if(max < temp) max = temp;
        }
      }
    }
  }
  return max;
}

int main( ) {
  int n,m;
  cin >> n >> m;
  int v_max = MIN, h_max = MIN;

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> grid[i][j];
    }
  }

  for(int l=0;l<m;l++){
    for(int r=l;r<m;r++){
      for(int i=0;i<n;i++){
        int subsum_j = 0;
        for(int j=0;j<=r-l;j++){
          subsum_j += grid[i][l+j];
        }
        subsum[l][r][i] = (i > 0 ? subsum[l][r][i-1] + subsum_j : subsum_j);
      }
    }
  }

  //cout << endl;
  //printSubsum(n,m);

  for(int v=1;v<m;v++){
    int l = findMaxRectangle(0,0,n,v);
    int r = findMaxRectangle(0,v,n,m);
    if(v_max < l + r) v_max = l + r;
  }
  for(int h=1;h<n;h++){
    int u = findMaxRectangle(0,0,h,m);
    int l = findMaxRectangle(h,0,n,m);
    if(h_max < u + l) h_max = u + l;
  }

  cout << (v_max>h_max ? v_max : h_max);
  //cout << findMaxRectangle(0,0,n,m);
}
