#pragma once
#include<iostream>
#include"clsDblLinkedList.h"
using namespace std;
template<class T>
class clsMyStack
{
private:
	clsDblLinkedList <T >  Stack;
public:

	void push(T Val)
	{
		Stack.InsertAtBeginning(Val);
	}
	void pop()
	{
		Stack.DeleteLastNode();
	}

	void print()
	{
		Stack.PrintList();
	}

	bool Isempty()
	{
		return(Stack.ISEmpty());
	}
	int Size()
	{

		return(Stack.Size());
	}

	T Top()
	{
		return(Stack.GetItem(0));
	}
	T Bottom()
	{

		return(Stack.GetItem(Size() - 1));
	}

	T Getitem(int pos)
	{
		return(Stack.GetItem(pos));
	}
	void Revers()
	{

		Stack.Revers();
	}

	void UpdateItem(int pos , T Replase )
	{
		Stack.UpdateItem(pos, Replase);
	}

	bool Insertafter(int pos , T Val)
	{
		return(Stack.InsertAfter(pos, Val));
	}
	bool InsertatFront(T val)
	{
		return(Stack.InsertAfter(0, val));
	}
	bool InsertatBack(T val)
	{
		return(Stack.InsertAfter(Size()-1, val));
	}
	void Clear()
	{
		Stack.Clear();
	}
};

