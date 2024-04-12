#include<iostream>
using namespace std;

int main ()
{
    int a[4][4][4] = {{{1, 2, 3, 4},{4, 5, 6, 7}}, {{8, 9, 10, 11},{12, 13, 14, 15}}};
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 4;k++){
                cout << a[i][j][k] << "\t";
            }
        }
    }
    
        return 0;

}