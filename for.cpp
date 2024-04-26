  #include <iostream>

using namespace std;

int main() {
    
    float soma = 0;
    float nota;
    float media;
    int contador ;
    int n;
    
    cout << "Dígite a quatidade de notas desejadas: ";
    cin >> n;
    
    for(contador = 0; contador < n; contador++){
        
        cout << "\nDígite a nota " << (contador + 1) << ": ";
        cin >> nota;
        soma = soma + nota;
        
    }
    
    media = soma / n;
    cout << "\nA sua média é: " << media << endl;

    return 0;
}

