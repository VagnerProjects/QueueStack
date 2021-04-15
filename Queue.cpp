#include "Queue.h"
#include "Stack.h"
#include <iostream>

using namespace std;

//Cria uma fila vazia
void Queue::create(Queue* queue, int size)
{
	stack = new Stack;

	//Cria a pillha
	stack->create(stack, size);

	//Criando a fila com um tamanho definido pelo usuario
	queue->capacidade = size;
	queue->data = new int[size];
	queue->first = 0;
	queue->last = -1;
	queue->itens = 0;
	queue-> criou = 0;
}

void Queue::enqueue(Queue* queue, int elem)
{
	stack->empilhar(stack, elem);

	if (queue->last == queue->capacidade - 1)
		queue->last = -1;

	queue->last++;
	queue->data[queue->last] = stack->topoStack(stack);
	queue->itens++;
	queue->criou = 1;
}

int Queue::dequeue(Queue* queue)
{
	stack->desempilhar(stack);

	int temp = queue->data[queue->first++];

	if (queue->first == queue->capacidade)
		queue->first = 0;

	queue->itens--;
	return temp;
}

int Queue::isFull(Queue* queue)
{
	return (queue->itens == queue->capacidade);
}

int Queue::isEmpty(Queue* queue)
{
	return (queue->itens == -1);
}

int Queue::front(Queue* queue)
{
	int cont, i;

	for (cont = 0, i = queue->first; cont < queue->itens; cont++)
	{

		return queue->data[i++];

	}

}

int Queue::sizeQueue(Queue* queue)
{
	return queue->capacidade;
}

int Queue::count(Queue* queue)
{
	return queue->itens;
}

void Queue::clear(Queue* queue)
{

	while (queue->itens != -1)
	{
		queue->dequeue(queue);
		
	}

}
