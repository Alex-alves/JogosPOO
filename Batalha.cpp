#include <iostream>//as bibliotecas com entrada e saída do terminal estejam disponíveis para o programa.
#include <string> //Para poder usar o tipo de dado String.
#include <ctime> //Agregar a biblioteca que vai usar o tempo como "semente" do gerador.
using namespace std;//as bibliotecas com entrada e saída do terminal estejam disponíveis para o programa.

int main()//Função principal
{ //Abrindo função principal main.

	bool sair = false;//controlar os comandos de seleção e loop.
	string jog1, jog2; //Variavel para salvar o nome dos jogadores.
	int vida1 = 20, vida2 = 20; //vida dos personagens.
	int danoc1 = 0, danoc2 = 0; //Danos causados nos personagens.

	cout << "Digite o nome do jogador 1:" << endl; //pedi para digitar o nome do jogador 1.
	cin >> jog1;  //Salva o nome digitado na variavel "jog1".

	cout << "Digite o nome do jogador 2:" << endl; //pedi para digitar o nome do jogador 2.
	cin >> jog2; //Salva o nome digitado na variavel "jog2" 

	while (sair == false) //Quando o while é executado, a expressão booleana é avaliada. Neste caso, se der false, o loop nunca é executado. 
	{
		cout << "-" << danoc1 << "                           -" << danoc2 << endl; 	//Imprime o dano causado

		cout << " o                             o" << endl; 	//Imprimindo os personagens.
		cout << ".T./                         \\.T. " << endl;	//Imprimindo os personagens.
		cout << " ^                             ^" << endl;	//Imprimindo os personagens.

		cout << "Atq: 4                        Atq: 4" << endl;	//Imprime o status do personagem
		cout << "Def: 2                        Def: 2" << endl;

		cout << jog1 << "                         " << jog2 << endl; //Faz a impressão na tela dos nomes dos jogadores.
		cout << "Vida: " << vida1 << "                    " << "Vida: " << vida2 << endl;//Imprime a vida dos personagens do jogo.
		system("pause"); //Pausa para que os jogadores fiquem aparecendo em tela.

		int dado6;//Dado de 6 lados.

		srand((int)time(0)); //Usa o tempo atual como 'semente' do gerador.
		dado6 = rand() % 6 + 1; //Gerador de números aleatórios.
		danoc1 = dado6 - 4; //Faz cálculo do dano causado ao lutador 1.

		if (danoc1 < 0) //Se o dano causado for menor que 0, entrará nessa condição.
		{ //abrindo a condição.
			danoc1 = 0; //Se entrou na condição, dano causado igual a 0.
		}//fechando a condição
		vida1 = vida1 - danoc1;//Causando dano ao lutador 1.

		dado6 = rand() % 6 + 1; //Gerando número aleatório
		danoc2 = dado6 - 4; //Cálculo do dano causado ao lutador 2

		if (danoc2 < 0) //Se o dano causado for menor que 0, entrará nesta condição
		{ //abrindo a condição
			danoc2 = 0; //Se entrou na condiçao, dano causado é 0
		} //fechando a condição
		vida2 = vida2 - danoc2;//Causando dano ao lutador 2.

		system("cls"); //Limpa a tela ao final de cada rodada.
					  
		if (vida1 <= 0 || vida2 <= 0) //Se a vida de ambos chegarem a menor ou igual a 0, os dois perderão
		{ //abrindo a condição
			sair = true; //o jogo acabará.
		}//fechando a condição
	}
	
	if (vida1 < vida2) //Condição mostrada se o jogador 2 for vencedor
	{ //Abrindo a condição
		cout << jog2 << " Venceu!" << endl;//Imprime quando o jogador 2 vencer.
	} //Fechando a condição
	  
	else if (vida2 < vida1) //Condição mostrada se o jogador 1 for o vencedor
	{ //abrindo a condição else if
		cout << jog1 << " Venceu!" << endl;
	}//fechando a condição else if
	 
	else //Se a vida dos jogadores forem semelhantes, entrará nesta condição
	{ //abrindo else
		cout << "Empate!" << endl;
	} //fechando o else
	  
	return 0;//termina a invocação da função main e fornece 0 como valor de função. O programa termina quando este comando for executado.
}