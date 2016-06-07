#include <iostream>//as bibliotecas com entrada e sa�da do terminal estejam dispon�veis para o programa.
#include <string> //Para poder usar o tipo de dado String.
#include <ctime> //Agregar a biblioteca que vai usar o tempo como "semente" do gerador.
using namespace std;//as bibliotecas com entrada e sa�da do terminal estejam dispon�veis para o programa.

int main()//Fun��o principal
{ //Abrindo fun��o principal main.

	bool sair = false;//controlar os comandos de sele��o e loop.
	string jog1, jog2; //Variavel para salvar o nome dos jogadores.
	int vida1 = 20, vida2 = 20; //vida dos personagens.
	int danoc1 = 0, danoc2 = 0; //Danos causados nos personagens.

	cout << "Digite o nome do jogador 1:" << endl; //pedi para digitar o nome do jogador 1.
	cin >> jog1;  //Salva o nome digitado na variavel "jog1".

	cout << "Digite o nome do jogador 2:" << endl; //pedi para digitar o nome do jogador 2.
	cin >> jog2; //Salva o nome digitado na variavel "jog2" 

	while (sair == false) //Quando o while � executado, a express�o booleana � avaliada. Neste caso, se der false, o loop nunca � executado. 
	{
		cout << "-" << danoc1 << "                           -" << danoc2 << endl; 	//Imprime o dano causado

		cout << " o                             o" << endl; 	//Imprimindo os personagens.
		cout << ".T./                         \\.T. " << endl;	//Imprimindo os personagens.
		cout << " ^                             ^" << endl;	//Imprimindo os personagens.

		cout << "Atq: 4                        Atq: 4" << endl;	//Imprime o status do personagem
		cout << "Def: 2                        Def: 2" << endl;

		cout << jog1 << "                         " << jog2 << endl; //Faz a impress�o na tela dos nomes dos jogadores.
		cout << "Vida: " << vida1 << "                    " << "Vida: " << vida2 << endl;//Imprime a vida dos personagens do jogo.
		system("pause"); //Pausa para que os jogadores fiquem aparecendo em tela.

		int dado6;//Dado de 6 lados.

		srand((int)time(0)); //Usa o tempo atual como 'semente' do gerador.
		dado6 = rand() % 6 + 1; //Gerador de n�meros aleat�rios.
		danoc1 = dado6 - 4; //Faz c�lculo do dano causado ao lutador 1.

		if (danoc1 < 0) //Se o dano causado for menor que 0, entrar� nessa condi��o.
		{ //abrindo a condi��o.
			danoc1 = 0; //Se entrou na condi��o, dano causado igual a 0.
		}//fechando a condi��o
		vida1 = vida1 - danoc1;//Causando dano ao lutador 1.

		dado6 = rand() % 6 + 1; //Gerando n�mero aleat�rio
		danoc2 = dado6 - 4; //C�lculo do dano causado ao lutador 2

		if (danoc2 < 0) //Se o dano causado for menor que 0, entrar� nesta condi��o
		{ //abrindo a condi��o
			danoc2 = 0; //Se entrou na condi�ao, dano causado � 0
		} //fechando a condi��o
		vida2 = vida2 - danoc2;//Causando dano ao lutador 2.

		system("cls"); //Limpa a tela ao final de cada rodada.
					  
		if (vida1 <= 0 || vida2 <= 0) //Se a vida de ambos chegarem a menor ou igual a 0, os dois perder�o
		{ //abrindo a condi��o
			sair = true; //o jogo acabar�.
		}//fechando a condi��o
	}
	
	if (vida1 < vida2) //Condi��o mostrada se o jogador 2 for vencedor
	{ //Abrindo a condi��o
		cout << jog2 << " Venceu!" << endl;//Imprime quando o jogador 2 vencer.
	} //Fechando a condi��o
	  
	else if (vida2 < vida1) //Condi��o mostrada se o jogador 1 for o vencedor
	{ //abrindo a condi��o else if
		cout << jog1 << " Venceu!" << endl;
	}//fechando a condi��o else if
	 
	else //Se a vida dos jogadores forem semelhantes, entrar� nesta condi��o
	{ //abrindo else
		cout << "Empate!" << endl;
	} //fechando o else
	  
	return 0;//termina a invoca��o da fun��o main e fornece 0 como valor de fun��o. O programa termina quando este comando for executado.
}