#pragma once
class Stack
{
public:
	int topo;
	int size;
	int* Elem;

public:
	void create(Stack* p, int c);
	int isEmpty(Stack* p);
	int isFull(Stack* p);
	void empilhar(Stack* p, int v);
	int topoStack(Stack* p);
	int desempilhar(Stack* p);
	void limpaPilha(Stack* p);
};

