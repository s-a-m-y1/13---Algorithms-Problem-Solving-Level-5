#pragma once
#include<iostream>
#include"clsDynamicArray.h"
using namespace std;
template<class T>
class clsMyQueueArr
{
protected:
	clsDynamicArray<T>_My_Queue;
public:
	void Push(T Val)
	{
		this->_My_Queue.InsertAtEnd(Val);
	}
	void Print()
	{
		this->_My_Queue.PrintList();
	}
	void pop()
	{
	    
		this->_My_Queue.DeleteLastItem();
	}

	int Size()
	{
	return	this->_My_Queue.Size();
	}
	bool IsEmpty()
	{
		return(this->_My_Queue.IsEmpty());
	}

	T front()
	{
		return this->_My_Queue.GetItem(0);
	}
	T back()
	{
		return this->_My_Queue.GetItem(Size() - 1);
	}

	T GetItem(int Index)
	{
		return this->_My_Queue.GetItem(Index);
	}

	void Revers()
	{
		this->_My_Queue.Revers();
	}

	void UpdateItem(int Index , T Val )
	{
		this->_My_Queue.SetItem(Index, Val);
	}
	void InsertAfter(int Index , T Val)
	{

		this->_My_Queue.InsertAfter(Index, Val);
	}
	void InsertAtFront(T Val)
	{
		this->_My_Queue.InsertAtBeginnig(Val);
	}

	void InsertAtBacK(T Val)
	{
		this->_My_Queue.InsertAtEnd(Val);
	}
				
};

