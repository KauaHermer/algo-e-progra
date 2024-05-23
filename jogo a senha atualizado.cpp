#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main() {
    srand(time(0));  // Seed para a função rand()

    while (true) {
        int num_digitos;// Número de dígitos da senha
        int max_tentativas;// Número máximo de tentativas

        // Escolha da dificuldade
        
        cout << "\nEscolha a dificuldade:\n";
        cout << "1. Fácil (3 dígitos, 8 tentativas)\n";
        cout << "2. Média (4 dígitos, 10 tentativas) - Padrão\n";
        cout << "3. Difícil (5 dígitos, 12 tentativas)\n";
        cout << "4. Sair\n";
        cout << "5. Sobre\n\n";
        int dificuldade;
        cin >> dificuldade;


        // Verifica a escolha do usuário
        if (dificuldade == 4) {
            system("clear");
            cout << "Saindo do jogo. Até a próxima!\n";
            return 0;
        }
        
        if (dificuldade == 5) {
            system("clear");
            cout << "Jogo desenvolvido por Kauã Hermenegildo e Felipe. Maio de 2024 Prof. Eduardo Alves da Silva\n";
            return 0;
        }

        if (dificuldade == 1) {
            num_digitos = 3;
            max_tentativas = 8;
        } else if (dificuldade == 3) {
            num_digitos = 5;
            max_tentativas = 12;
        } else {
            num_digitos = 4;
            max_tentativas = 10;
        }


        int senha1, senha2, senha3, senha4, senha5;
        bool validar;
        
        // Loop para gerar uma senha válida com dígitos únicos
        do {
            senha1 = (rand() % 6) + 1;
            senha2 = (rand() % 6) + 1;
            senha3 = (rand() % 6) + 1;
            senha4 = (rand() % 6) + 1;
            senha5 = (rand() % 6) + 1;

            validar = true; //verifica se a senha gerada é válida

            // Verificar se todos os dígitos são únicos
            if (num_digitos >= 2) {
                validar = validar && (senha1 != senha2);
            }
            
            if (num_digitos >= 3) {
                validar = validar && (senha1 != senha3) && (senha2 != senha3);
            }
            
            if (num_digitos >= 4) {
                validar = validar && (senha1 != senha4) && (senha2 != senha4) && (senha3 != senha4);
            }
            
            if (num_digitos == 5) {
                validar = validar && (senha1 != senha5) && (senha2 != senha5) && (senha3 != senha5) && (senha4 != senha5);
            }
        } while (!validar);


        int tentativas = 0;
        bool acertou = false;
        
        system("clear");
        cout << "Bem-vindo ao jogo A Senha!\n";
        cout << "A senha consiste em " << num_digitos << " dígitos únicos entre 1 e 6.\n";
        cout << "Você tem " << max_tentativas << " tentativas para adivinhar a senha.\n";
        cout << "Digite '0' a qualquer momento para desistir e voltar ao menu de dificuldades.\n";

        while (tentativas < max_tentativas && !acertou) {
            tentativas++;// Contador de tentativas
            int tentativa1, tentativa2, tentativa3, tentativa4, tentativa5;
            int digitos_corretos = 0;
            int digitos_incorretos;
            
            cout << "\n\nTentativa " << tentativas << ": \n";
            cin >> tentativa1;
            if (tentativa1 == 0) break; //Se o jogador digitar '0', sai do loop e retorna ao menu de dificuldades
            if (tentativa1 < 1 || tentativa1 > 6) {
                cout << "Valor inválido! Digite um número entre 1 e 6.\n";
                tentativas--;// Decrementa o contador de tentativas para permitir uma nova tentativa
                continue;
            }

            cin >> tentativa2;
            if (tentativa2 == 0) break; //Se o jogador digitar '0', sai do loop e retorna ao menu de dificuldades
            if (tentativa2 < 1 || tentativa2 > 6) {
                cout << "Valor inválido! Digite um número entre 1 e 6.\n";
                tentativas--;
                continue;
            }    
            if (tentativa2 == tentativa1 ) {
                cout << "Valor inválido! Você ja digitou este número.\n";
                tentativas--;
                continue;
            }
            
            if (num_digitos >= 3) {
                cin >> tentativa3;
                if (tentativa3 == 0) break; //Se o jogador digitar '0', sai do loop e retorna ao menu de dificuldades
                if (tentativa3 < 1 || tentativa3 > 6) {
                    cout << "Valor inválido! Digite um número entre 1 e 6.\n";
                    tentativas--;
                    continue;
                }
                if (tentativa3 == tentativa1 && tentativa3 == tentativa2) {
                    cout << "Valor inválido! Você ja digitou este número.\n";
                    tentativas--;
                    continue;
                }
            }
            
            if (num_digitos >= 4) {
                cin >> tentativa4;
                if (tentativa4 == 0) break; //Se o jogador digitar '0', sai do loop e retorna ao menu de dificuldades
                if (tentativa4 < 1 || tentativa4 > 6) {
                    cout << "Valor inválido! Digite um número entre 1 e 6.\n";
                    tentativas--;
                    continue;
                }
                if (tentativa4 == tentativa1 && tentativa4 == tentativa2 && tentativa4 == tentativa3 ) {
                    cout << "Valor inválido! Você ja digitou este número.\n";
                    tentativas--;
                    continue;
                }
            }
            
            if (num_digitos == 5) {
                cin >> tentativa5;
                if (tentativa5 == 0) break; //Se o jogador digitar '0', sai do loop e retorna ao menu de dificuldades
                if (tentativa5 < 1 || tentativa5 > 6) {
                    cout << "Valor inválido! Digite um número entre 1 e 6.\n";
                    tentativas--;
                    continue;
                }
                if (tentativa5 == tentativa1 && tentativa5 == tentativa2 && tentativa5 == tentativa3 && tentativa5 == tentativa4) {
                    cout << "Valor inválido! Você ja digitou este número.\n";
                    tentativas--;
                    continue;
                }
            }

            // Verifica dígitos corretos
         
    
            if (num_digitos == 3) {
                if(tentativa1 == senha1 || tentativa1 == senha2 || tentativa1 == senha3 ) digitos_corretos++;
                if(tentativa1 == senha1 || tentativa1 == senha2 || tentativa1 == senha3 ) digitos_incorretos++;
                if(tentativa2 == senha1 || tentativa2 == senha2 || tentativa2 == senha3 ) digitos_corretos++;
                if(tentativa3 == senha1 || tentativa3 == senha2 || tentativa3 == senha3 ) digitos_corretos++;
            }
                
            if (num_digitos == 4) {
                if(tentativa1 == senha1 || tentativa1 == senha2 || tentativa1 == senha3 || tentativa1 == senha4 ) digitos_corretos++;
                if(tentativa2 == senha1 || tentativa2 == senha2 || tentativa2 == senha3 || tentativa2 == senha4 ) digitos_corretos++;
                if(tentativa3 == senha1 || tentativa3 == senha2 || tentativa3 == senha3 || tentativa3 == senha4 ) digitos_corretos++;
                if(tentativa4 == senha1 || tentativa4 == senha2 || tentativa4 == senha3 || tentativa4 == senha4 ) digitos_corretos++;
            }
            if (num_digitos == 5) {
                if(tentativa1 == senha1 || tentativa1 == senha2 || tentativa1 == senha3 || tentativa1 == senha4 || tentativa1 == senha5) digitos_corretos++;
                if(tentativa2 == senha1 || tentativa2 == senha2 || tentativa2 == senha3 || tentativa2 == senha4 || tentativa2 == senha5) digitos_corretos++;
                if(tentativa3 == senha1 || tentativa3 == senha2 || tentativa3 == senha3 || tentativa3 == senha4 || tentativa3 == senha5) digitos_corretos++;
                if(tentativa4 == senha1 || tentativa4 == senha2 || tentativa4 == senha3 || tentativa4 == senha4 || tentativa4 == senha5) digitos_corretos++;
                if(tentativa5 == senha1 || tentativa5 == senha2 || tentativa5 == senha3 || tentativa5 == senha4 || tentativa5 == senha5) digitos_corretos++;
            }
            
            digitos_incorretos = num_digitos - digitos_corretos;
            

            // Verificar se acertou a senha completa
            if ((num_digitos == 3 && tentativa1 == senha1 && tentativa2 == senha2 && tentativa3 == senha3) ||
                (num_digitos == 4 && tentativa1 == senha1 && tentativa2 == senha2 && tentativa3 == senha3 && tentativa4 == senha4) ||
                (num_digitos == 5 && tentativa1 == senha1 && tentativa2 == senha2 && tentativa3 == senha3 && tentativa4 == senha4 && tentativa5 == senha5)) {
                acertou = true;
                
                system("clear");
                cout << "Parabéns! Você acertou a senha em " << tentativas << " tentativas.\n";
                cout << "A senha era: " << senha1;
                if (num_digitos >= 2) cout << senha2;
                if (num_digitos >= 3) cout << senha3;
                if (num_digitos >= 4) cout << senha4;
                if (num_digitos == 5) cout << senha5;
                cout << ".\n";
                
            }else if (num_digitos == 5 && digitos_corretos == 5) {
                cout << "Você acertou os números mas nao a sequência";
            }else if (num_digitos == 4 && digitos_corretos == 4){
                cout << "Você acertou os números mas nao a sequência";
            }else if (num_digitos == 3 && digitos_corretos == 3){
                cout << "Você acertou os números mas nao a sequência";
            }else {
                cout << "Números corretos: " << digitos_corretos << " Números incorretos: " << digitos_incorretos << "\n";
            }
        }

        if (tentativas < max_tentativas && !acertou) {
            system("clear");
            cout << "Você desistiu. Voltando ao menu de dificuldades...\n";
        } else if (!acertou) {
            system("clear");
            cout << "Você nao conseguiu adivinhar a senha em " << max_tentativas << " tentativas.\n";
            cout << "A senha correta era: " << senha1;
            if (num_digitos >= 2) cout << senha2;
            if (num_digitos >= 3) cout << senha3;
            if (num_digitos >= 4) cout << senha4;
            if (num_digitos == 5) cout << senha5;
            cout << ".\n";
        }
    }

    return 0;
}