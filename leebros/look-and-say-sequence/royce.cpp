#include <iostream>
#include<vector>
using namespace std;
std::vector<int> numbers(1000, 0);
std::vector<int> next_numbers(1000, 0);

int main( ) {
    int n;
    cin >> n;

    numbers[0] = 1;
    for (int i = 1; i < n; ++i) {
        int digit = 0;
        int count = 0;
        int k = 0;
        for (int j = 0; j < 1000; ++j) {
            if(numbers[j] == 0){
                next_numbers[k] = digit;
                next_numbers[k+1] = count;
                break;
            }
            else if (digit == 0){
                digit = numbers[j];
                count = 1;
            }
            else if(digit != numbers[j]){
                next_numbers[k] = digit;
                next_numbers[k+1] = count;
                k+=2;
                digit = numbers[j];
                count=1;
            }
            else count++;
        }

        for(int i=0;i<1000;i++){
            if(next_numbers[i] == 0) break;
            numbers[i] = next_numbers[i];
        }
    }

    for(int i=0;i<1000;i++){
        if(numbers[i] == 0) break;
        cout << numbers[i];
    }
}
