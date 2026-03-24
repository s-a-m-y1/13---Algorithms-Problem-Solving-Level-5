#pragma once
#include<iostream>
#include"clsDblLinkedList.h"
using namespace std;
#include"clsDblLinkedList.h"
template<class  T>
class clsMyQueue
{
protected:
	clsDblLinkedList<T>Queue;
public:
	void Push(T Val)
	{
		Queue.InsertAtEnd(Val);
	}
	void pop()
	{
		Queue.DeleteFitstNode();
	}

	void print()
	{
		Queue.PrintList();
	}
	int Size()
	{
		return	Queue.Size();
	}
	T front()
	{
		return Queue.GetItem(0);
	}
	T back()
	{
		return Queue.GetItem(Size() - 1);
	}
	/// Extension 1
	T GetItem(int Index)
	{
		return Queue.GetItem(Index);
	}
	/// Extension 2
	void Revers()
	{
		Queue.Revers();
	}
	/// Extension 3
	void UpdateItem(int Item, T Val)
	{
		Queue.UpdateItem(Item, Val);


	}
	/// Extension 4
	bool InsertAfter(int Index, T Val)
	{
		
		return(Queue.InsertAfter(Index, Val));
	}
	/// Extension 5

	bool InsertatFront( T Val)
	{
		return(Queue.InsertAfter(0, Val));
	}
	/// Extension 6
	bool Insertatback(T Val)
	{
		return(Queue.InsertAfter(Size() - 1, Val));
	}
	/// Extension 7 

	void Clear()
	{

		Queue.Clear();
	}

};
