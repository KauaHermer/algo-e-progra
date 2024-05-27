/******************************************************************************

matrix

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int mat [3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
        
    int c, l;
    
     for (l = 0; l < 3; l ++) {
        for (c = 0; c < 4; c++){
         cout << mat[l][c] << " ";
        }
    //serve para fazer a table
    cout << endl;
    }

    return 0;
}