#include <iostream>
#include<vector>
using namespace std;
std::vector<int> indices;


int main( ) {
    int n, max = 0;
    cin >> n;

    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        if(max<temp){ max = temp; indices.push_back(i); }
    }
    
    for(int i=indices.size()-1;i>=0;i--){
        cout << indices[i]+1 << " ";
    }
}
