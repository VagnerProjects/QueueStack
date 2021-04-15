#include <iostream>
#include <stdio.h>
#include "Queue.h"
#include <locale>
#include <time.h>
#include <thread>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int opc, capacidade = 20;
	Queue* queue = new Queue;

	cout << endl;
	cout << " Tamanho da fila: " << capacidade << endl << endl;
	cout << " Carregando..." << endl;

	Sleep(2000);

	queue->create(queue, capacidade);

	do
	{
		int valor = 0;

		system("cls");

		cout << endl;
		cout << " ESTUTURA DE DADOS - TAD FILA ESTÁTICA COM PILHA ESTÁTICA!" << endl << endl;

		cout << " [1] Inserir" << endl;
		cout << " [2] Remover" << endl;
		cout << " [3] Ver topo da fila" << endl;
		cout << " [4] Tamanho da fila" << endl;
		cout << " [5] Quantidade de elementos na fila" << endl;
		cout << " [6] Limpar fila" << endl;
		cout << " [7] Sair" << endl << endl;

		cout << " Escolha: ";
		cin >> opc;
		cout << endl << endl;

		switch (opc)
		{
		case 1:
			if (queue->isFull(queue) != 1 && queue != NULL)
			{
				cout << " VALOR A SER INSERIDO NA FILA: (APENAS INTEIROS): ";
				cin >> valor;
				queue->enqueue(queue, valor);
			}
			else
			{
				cout << " A FILA ESTÁ NULA OU JÁ ESTÁ CHEIA!" << endl << endl;
				system("pause");
			}

			break;
		case 2:
			if ((queue->isEmpty(queue) != 1 && queue-> criou == 1) && (queue != NULL))
			{
				cout << " ELEMENTO REMOVIDO DA FILA: " << queue->dequeue(queue) << endl << endl;
				system("pause");
			}
			else
			{
				cout << " A FILA JÁ ESTÁ VAZIA OU ESTÁ NULA!" << endl << endl;
				system("pause");
			}
			break;

		case 3:
			if ((queue->isEmpty(queue) != 1 && queue->criou == 1) && (queue != NULL))
				cout << " TOPO DA FILA: " << queue->front(queue) << endl << endl;
			else
				cout << " A FILA ESTÁ NULA OU VAZIA, NÃO HÁ COMO MOSTRAR O TOPO!" << endl << endl;

			system("pause");
			break;

		case 4:
			if (queue != NULL)
			{
				cout << " CAPACIDADE DA FILA: " << queue->sizeQueue(queue) << " ELEMENTOS." << endl << endl;
			}
			else
				cout << " A fila está nula!" << endl << endl;

			system("pause");
			break;

		case 5:
			if (queue != NULL && queue->criou == 1)
			{
				if (queue->isEmpty(queue) != 1)
					cout << " A FILA POSSUI: " << queue->count(queue) << " ELEMENTOS." << endl << endl;
				else
					cout << " A FILA POSSUI: " << 0 << " ELEMENTOS." << endl << endl;
			}
			else
				cout << " A FILA ESTÁ NULA!" << endl << endl;

			system("pause");
			break;

		case 6:
			if ((queue->isEmpty(queue) != 1 && queue->criou == 1) && (queue != NULL))
			{
				queue->clear(queue);
				cout << " FILA ESVAZIADA!" << endl << endl;
			}
			else
			{
				cout << " A FILA ESTÁ NULA OU JÁ ESTÁ VAZIA!" << endl << endl;
			}

			system("pause");
			break;

		case 7:
			exit(0); break;

		default:
			cout << " OPÇÃO INVÁLIDA!" << endl << endl;
			cout << "Carregando..." << endl;
			Sleep(2000);

		}

		cout << endl << endl;

	} while (opc != 7);


	delete queue->stack;
	delete queue;

	cout << endl << endl;
	system("pause");

	return 0;
}
