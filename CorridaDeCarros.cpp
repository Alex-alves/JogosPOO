#include <iostream>//Coloca todas as definições de nomes no std namespace.
#include <ctime>//Inclui a biblioteca que usa o tempo atual como 'semente' do gerador
using namespace std; //Define todas as funções da biblioteca padrão.


void imprimir_espacos(int rodada);//Declarando a função que imprime os espaços.
int main()//main é uma função sem parâmetros que ao terminar sua execução retornará um valor inteiro int.
{//Abrindo a função principal.

	int total_espacos = 50;//a quantidade total de espaços até a chegada.
	int espacos_a = 0;//Quantidade de espaços que o carro A correu.
	int espacos_b = 0;//Quantidade de espaços que o carro B correu.
	while (espacos_a < total_espacos && espacos_b < total_espacos)//Função que vai sair do laço ao chegar na chegada.

	{//começo do laço da corrida.
		system("cls");//Limpa a tela para a próxima rodada.

		cout << "°Velocidade Sem Limites°" << endl;//Imprimindo a apresentação do jogo.
		cout << "Largada:                                         Chegada:" << endl;//Imprime o que está dentro das aspas.

		srand((int)time(0));//Gerando 'semente' a partir do tempo.

							/*código do carro A*/
		espacos_a = rand() % 3 + 1 + espacos_a;//Gera número aleatório a partir do 1 até 3 para o carro A andar nesta quantidade delimitada.
		imprimir_espacos(espacos_a);//Imprimindo os espaços.
		cout << " _ " << endl;//Imprimindo parte do carro A.
		imprimir_espacos(espacos_a);//Imprimindo os espaços.
		cout << "-o-o>" << endl;//Imprimindo outra parte do carro A.

								/*Parte do código do carro B*/
		espacos_b = rand() % 3 + 1 + espacos_b;//Gera número aleatório a partir do 1 até 3 para o carro B andar nesta quantidade delimitada.
		imprimir_espacos(espacos_b);//Imprimindo os espaços.
		cout << " _ " << endl;//Imprimindo uma parte do carro B.
		imprimir_espacos(espacos_b);//Imprimindo os espaços.
		cout << "-o-o>" << endl;//Imprimido outra parte do carro B.
	}//Final do laço da corrida.

	if (espacos_a > espacos_b) cout << "Carro A venceu a corrida!" << endl;//Se o carro A vencer a corrida, entrará nesta condição.
	else if (espacos_b > espacos_a) cout << "Carro B venceu a corrida!" << endl;//Se não, o carro B vencerá a corrida.
	else cout << "Empate!" << endl;//Se os dois chegarem ao mesmo tempo, dará empate.
	return 0;//Este comando termina a invocação da função main e fornece 0 como o valor da função. O programa termina quando este comando é executado.
}//Final da função principal.

void imprimir_espacos(int rodada)//Função que vai imprimir os espaços.
{//Abrindo função que imprime os espaços.
	for (int qnt_atual = 0; qnt_atual < rodada; qnt_atual++)
	{//Início do laço que imprime os espaços.
		cout << " ";//Imprime os espaços.
	}//Fechando o laço que imprime os espaços.
}//Fechando função que imprime os espaços.