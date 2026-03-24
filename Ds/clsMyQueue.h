#pragma once
#include<iostream>
using namespace std;
template<class T>
class clsMyQueue
{
 protected:
	int _Size = 0;
public:
	class Queue
	{
	public:
	T Val;
	Queue*Next ;
	};
	Queue* Head = nullptr;
	Queue* Tail = nullptr;
	void Push(T Val )
	{
		Queue* Pass =new Queue();/// New pointer at heap 
		Pass->Val = Val;///
		if (Head==nullptr)
		{
			Head = Pass;
			Tail = Pass;
		}
		else
		{
			Tail->Next = Pass;
			Tail = Pass;
		}
		
		_Size++;
	}

	int Size()
	{
		return _Size;
	}
    
	T front()
	{
		if (Head != nullptr)
		{

			return Head->Val;
		}
		
		return nullptr;
		
	}
	T back()
	{
		if (Tail!=nullptr)
		{
			return Tail->Val;
		}
		return nullptr;
	}

	void Print()
	{
		Queue* Header = Head;
		while (Header != nullptr)
		{
			
			cout << Header->Val<<endl;
			Header = Header->Next;
		}
	}
	void pop()
	{
		///FIFO
		if (Head == nullptr)return;
		Queue* First = Head;
		Queue* Sum = Head;
		if (First->Next!=nullptr)
		{
			Sum = Sum->Next;
		}		
    
		delete First;
		First = Sum;
		Head = First;

	}
};

