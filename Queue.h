#pragma once
#include "Stack.h"

class Queue
{
public:
	int capacidade;
	int* data;
	int first;
	int last;
	int itens;
	bool criou;
	Stack* stack;

public:
	void create(Queue* queue, int size);
	void enqueue(Queue *queue, int elem);
	int dequeue(Queue* queue);
	int isEmpty(Queue* queue);
	int isFull(Queue* queue);
	int front(Queue* queue);
	int sizeQueue(Queue* queue);
	int count(Queue* queue);
	void clear(Queue* queue);
};

