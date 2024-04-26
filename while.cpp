*FOR SÓ É PARADA QUANDO O NÚMERO FOR NO MESMO VALOR DO N: SE N FOR NO VALOR DE 4 O CONTADOR VAI SER 4

#include <iostream>

using namespace std;

int main() {
    
    float soma = 0;
    float nota;
    float media;
    int contador = 0;
    int n;
    
    cout << "Dígite a quatidade de notas desejadas: ";
    cin >> n;
    
    while(contador < n){
        
        cout << "\nDígite a nota " << (contador + 1) << ": ";
        cin >> nota;
        soma = soma + nota;
        contador++;
    }
    
    media = soma / n;
    cout << "\nA sua média é: " << media << endl;

    return 0;
}

    return 0;
}
