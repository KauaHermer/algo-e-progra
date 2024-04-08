#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{   int escolha__1, escolha__2, escolha__3, escolha__4, escolha__5, escolha__6, escolha__7,escolha__8,escolha__9,escolha__10;
    
    
    cout<<" Enquanto o ônibus avança pela estrada, minha mente vagueia pelos eventos que me trouxeram até aqui. Eu era bom no que fazia, frio e eficiente.\n";
    cout<<"Cada alvo, uma peça em um quebra-cabeça mortal que eu montava com precisão calculada. Mas agora, as peças se voltaram contra mim. \n";
    cout<<"Alguém havia me traído, acabei aqui, algemado e encurralado.Eu me sento no banco apertado do ônibus, as algemas frias pressionando meus pulsos. \n";
    cout<<"Olho em volta e vejo os olhares de desconfiança, medo e apreensão, afinal, ninguém queria estar aqui.\n";
    
    cout<<" Enquanto me questionava sobre a minha situação sou interrompido, um adolescente inquieto me questiona:\n";
    
    cout<<"“Eai, ta em cana por o que?”\n";
    
    cout<<"\nÉ perceptível seu esforço para tentar se sentir descolado, desde que chegou no ônibus não parou de conversar, mal sabe o que lhe \n";
    cout<<"aguarda,para ser honesto, nem eu sei.\n";
    
    cout<< "\n1 - falar a verdade   2 - mentir: ";
    
    cin>> escolha__1;
    
    switch (escolha__1) {
        case 1:
            system("clear");
            cout<<"Sou um assasino de aluguel.\n";
        break;
        
        case 2:
            system("clear");
            cout<<"Fui preso injustamente!\n";
        break;
        
        default:
            system("clear");
            cout<<"Você só tem 2 respostas mentir ou falar a verdade\n";
    }
    
    
    cout<<" \nHavia um prisioneiro no ônibus que não parava de falar alto, deixando os outros irritados, inclusive um velho que se levantou e mandou ele calar\n"; 
    cout<<"a boca, junto com o guarda. Parecia merecido, pois as coisas são diferentes aqui.\n";
    
    cout<<"\nAo chegar na cela, esperava um companheiro mais intimidador, mas encontrei apenas um homem velho e cansado da vida. Fui marcado no pescoço pelo\n";
    cout<<"'cefão' da cela, pensei que fosse um símbolo do presídio. Passou um tempo e os guardas começaram a fazer a ronda, até que um enorme apareceu gritando para\n"; 
    cout<<"irmos comer.\n";
    cout<<"\n(Guarda) ‘Vão na frente mas, sem ficar perto um do outro desgraçados’ \n";
    

    cout << "\n1 - Obedecer   2 - Ficar parado: ";
    cin >> escolha__2;

    if (escolha__2 == 1) {
        system("clear");
        cout << "Saindo da cela fui andando em direção ao refeitório...\n";
    } else if (escolha__2 == 2) {
        system("clear");
        cout << "Você é levado a solitária por um ano, suas chances de fuga são nulas.\n";
        
        cout << "\n1 -Você começa a bedecer os guardas   2 - Continuar com teimosia: ";
        cin >> escolha__2;

        if (escolha__2 == 1) {
            system("clear");
            cout << "Saindo da cela fui andando em direção ao refeitório...\n";
        } else {
            system("clear");
            cout << "GAME OVER.\n";
            return 0; 
        }
    } 
    cout<<"\ncomecei a observar ao redor, e algo me chamou atenção um único homem do presídio que tinha \n";
    cout<<"a mesma marca que eu, ainda não conhecia o significado mas sabia que eu deveria falar com aquele homem. \n";
    
    cout<<"\n1 - Falar com o 'homem'     2 - Continuar comendo ";
    cin >> escolha__3;
    
    if (escolha__3 == 1) {
        system("clear");
        cout << "(Dmitry) ‘Com licença, meu nome é Dmitry, você tem alguns minutos para a gente conversar?’\n";
        cout << "(Homem) ‘Muito prazer, meu nome é Brad, o que você deseja?’\n";
    } else {
        system("clear");
        cout << "\nvocê continua comendo e perde a chance de falar com ele\n\n\n GAME OVER";
    }
    
    cout << "\n1 - Perguntar sobre a marca no pescoço   2 - Perguntar sobre a prisão ";
    cin >> escolha__4;
    
    if (escolha__4 == 1 ) {
        system("clear");
        cout << "\n(Dmitry) ‘Quando cheguei aqui alguns homens fizeram uma marca no meu pescoço, e percebi que só eu e você temos ela, pode me explicar o motivo?’\n";
    } else {
        system("clear");
        cout << "Brad achou sua pergunta fútil, e não quer mais falar com você \n\n\n GAME OVER";
    }
    
    cout << "(Brad) ‘Olha de uma forma bem simples, o cara que lhe caguetou para você ser preso, está com a sua filha e quer que você fuja da prisão com um certo alguém,\n";
    cout << "para assim ele devolver sua filha e conseguir a sua liberdade.’\n";
    cout << "(Dmitry) ‘E como você sabe disso tudo?’\n";
    cout << "(Brad) ‘Por que a alguns anos atrás eu estava no seu lugar e não consegui realizar a missão’\n";
    cout << "\nDmitry muito assustado volta para sua cela para tentar compreender a sua situação, então resolve: ";
    
    cout << "\n 1 - Falar com o Chefão da Cela    2 - Dormir (Descansar) ";
    cin >> escolha__5;
    
    if (escolha__5 == 1 ) {
        system("clear");
        cout << "\n(Dmitry) ‘Eu já sei de tudo, e sei que você trabalha para o mesmo cara que me fez parar aqui, me fale de uma vez por todas o que eu devo fazer\n";
        cout << "para me livrar desse lugar e ter minha filha de volta’\n";
    } else {
        system("clear");
        cout << "Enquanto você dormia o Chefão lhe envenenou \n\n\n GAME OVER";
    }
    
    cout << "(Chefão) ‘Não posso dar muitas informações mas, pelo pouco que sei, você deve achar um Hacker que está aqui dentro e fugir com ele.’\n";
    cout << "\nDmitry então pede ajuda para o seu amigo Christopher, e eles vão atrás desse tal hacker.\n";
    cout << "\nChristopher diz ao Dmitry que certa noite ouviu conversas pelos corredores, e na conversa foi apontado um certo “Gênio da computação” que";
    cout << "vivia solitário pelo presídio. ‘O que eles devem fazer?’\n";
    
    cout << "1 - Ir para o refeitório   2 - Ir para a Área de lazer   3 - Checar as celas ";
    
    cin >> escolha__6;
    
    switch (escolha__6) {
        
        case 1 :
        system("clear");
        cout << "As portas do refeitório estão fechadas. Vocês perderam muito tempo e os guardas os pegaram. \n\nGAME OVER\n\n";
        system("stop");
        break;
        
        case 2 :
        system("clear");
        cout << "\nAo chegar na Área de lazer eles notam um jovem solitário mexendo em um (Rádio antigo) Dmitry decide\n";
        cout << "ir sozinho e pede para seu colega ficar na porta observando. Ao se aproximar do jovem ele o questiona\n";
        break; 
        
        case 3 :
        system("clear");
        cout << "Todas as celas estão interditadas para a faxina. Vocês perderam muito tempo e os guardas os pegaram. \n\nGAME OVER\n\n";
        system("stop");
        break; 
    }
    
    cout <<"(Dmitry) ‘Você é o hacker?’";
     cout <<"\nPor ter notado a marca semelhante no pescoço, o Hacker prossegue.\n";
     cout <<"\n(Hacker) ‘Sim, sou eu, só estava esperando meu irmão lhe enviar para dar seguimento no meu plano de fuga.’\n";
     cout <<"\n(Dmitry) A que surpresa nada boa seu irmão me dedurou e ainda por cima está com minha filha.\n";
     cout <<"me conte logo o que precisamos fazer para sair daqui.";
     
      cout<<"\n1 - Ouvir o Plano     2 - Voltar para cela ";
    cin >> escolha__7;
    
    if (escolha__7 == 1) {
        system("clear");
        cout << "\n(Hacker) ‘Através do meu Radio modificado vou me passar pelo xerife e vou atrair um guarda\n";
    } else {
        system("clear");
        cout << "\nAs celas continuam interditadas\n\n\n GAME OVER";
    }
    
    cout<<"para a sua cela  o plano começa com você e seu colega desmaiando e roubando sua farda e o ";
    cout<<"\ncartão que abre as fechaduras magnéticas, e então Christopher vai se passar por um Guarda\n ";
    cout<<"que está supostamente escoltando eu e você até a sala da central do presídio, e quando ";
    cout<<"\nchegarmos lá vamos instaurar o caos, é só confiar em mim, preciso apenas da sua parceria.’\n";
    cout<<"\n\nA ação irá começar durante esta noite.\n\n";

cout << "\n1 - Confiar no Hacker  2 - Tentar outro jeito ";
    cin >> escolha__8;

    if (escolha__8 == 1) {
        system("clear");
        cout << " Dmitry aceita realizar o plano do Hacker\n";
    } else if (escolha__8 == 2) {
        system("clear");
        cout << "Você tenta pensar em outro plano mas o Hacker nega e não vai querer te ajudar mais\n";
        
        cout << "\n1 - Confiar no Hacker   2 - Tentar outro jeito ";
        cin >> escolha__8;

        if (escolha__8 == 1) {
            system("clear");
            cout << " Dmitry aceita realizar o plano do Hacker\n";
        } else {
            system("clear");
            cout << "GAME OVER.\n";
            return 0; 
        }
    } 
    
    cout<<"\nLogo após anoitecer, foi dado  início ao plano\n";
    cout<<"\n\nA estratégia inicial foi um sucesso, ninguém desconfiou de Christopher e os dois adentraram\n\n";
     cout<<"na sala Central, o Hacker invadiu o sistema do presídio e conseguiu abrir todas as celas e";
     cout<<"\ndestrancar todas as fechaduras possíveis além de disparar o alarme fazendo com que o \n ";
     cout<<"presídio se transformasse numa correria intensa, tinham presos correndo para todos os lados";
     cout<<"\n\nApós o plano ocorrer melhor do que o esperado, Dmitry e o Hacker devem escolher uma \n\n";
     cout<<"forma de fuga. Qual será?";

    cout << "\n1 - Viatura  2 - Helicóptero  3 - Correndo ";
    
    cin >> escolha__9;
    
    switch (escolha__9) {
        
        case 1 :
        system("clear");
        cout << "os guardas atiraram no pneu e os dois são capturados \n\nGAME OVER\n\n";
        system("stop");
        break;
        
        case 2 :
        system("clear");
        cout << "\nótima escolha, rumo a liberdade\n";
        cout << "\nDepois de algumas horas de voo, ao chegar no destino eles se encontraram com o irmão\n";
        break; 
        
        case 3 :
        system("clear");
        cout << "os cães guardas alcançam e os devoram \n\nGAME OVER\n\n";
        system("stop");
        break; 
    }
    
   cout<<"do Hacker para realizar a troca. E o Dmitry decide:";
   
   cout << "\n\n1 - Pegar a Filha entregar o Hacker  2 - Pegar a filha e Matar os dois";
    cin >> escolha__10;

    if (escolha__10 == 1) {
        system("clear");
        cout << " parabéns você conseguiu\n";
    } else if (escolha__10 == 2) {
        system("clear");
        cout << "eles tinham comparsas escondidos, você e sua filha morrem\n";
        
        cout << "\n1 - Pegar a Filha entregar o Hacker   2 - Pegar a filha e Matar os dois ";
        cin >> escolha__10;

        if (escolha__10 == 1) {
            system("clear");
            cout << " parabéns você conseguiu\n";
        } else {
            system("clear");
            cout << "GAME OVER.\n";
            return 0; 
        }
    } 

    return 0;
}