using namespace std;
#include <iostream>

int main()
{   int opcao;

    do {
       cout<<"escolha uma opção: \n1 para \n2 para \n3 para\n "; 
       cin >> opcao;
       
       if (opcao < 1 || opcao > 3) {
           cout << "coloque uma escolha certa invalida\n";
       }
       
    } while (opcao < 1 || opcao > 3) ;
        cout << "opcao certa";
    
    
    return 0;
}