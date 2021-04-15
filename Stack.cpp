#include "Stack.h"
#include <iostream>

using namespace std;

void Stack::create(Stack* p, int c)
{
	p->topo = -1;
	p->size = c;
	p->Elem = new int[c];
}

int Stack::desempilhar(Stack* p)
{
	int aux = p->Elem[p->topo];
	p->topo--;
	return aux;
}

int Stack::topoStack(Stack* p)
{
	return p->Elem[p->topo];
}

int Stack::isEmpty(Stack* p)
{
	if (p->topo == -1)
		return 1;
	else
		return 0; 
}

int Stack::isFull(Stack* p)
{
	if (p->topo == p->size - 1)
		return 1;
	else
		return 0;
}

void Stack::empilhar(Stack* p, int val)
{
	p->topo++;
	p->Elem[p->topo] = val;
}

void Stack::limpaPilha(Stack* p)
{
	while (p->topo != -1)
	{
		p->Elem[p->topo];
		p->topo--;
	}
}
