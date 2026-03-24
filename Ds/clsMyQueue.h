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
		Queue.InsertAtEnd( Val);
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


};
