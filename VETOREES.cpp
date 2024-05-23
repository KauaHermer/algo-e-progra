/******************************************************************************

AULA VETORES

const nao pode ser alterado o valor da contante


*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    const int TAM_VETOR = 6;
    
    int notas [TAM_VETOR];
    
    /* se quiser pre defenir o valor use chave e os valores:
    int notas [TAM_VETOR] = {1,2,3,4,5,6};
    */
       
    notas[0] = 1;
    notas[1] = 2;
    notas[2] = 3;
    notas[3] = 4;
    notas[4] = 5;
    notas[5] = 6;
    
    for(int i = 0; i <  TAM_VETOR; i++) {
        cout << "nota " << i+1 << ": " << notas[i] << "\n";
     }

    return 0;
}
