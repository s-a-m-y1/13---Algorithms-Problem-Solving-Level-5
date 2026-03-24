#pragma once
#include<iostream>
#include"clsDblLinkedList.h"
#include"clsMyQueue.h"
using namespace std;
template<class T>
class clsMyStack:public clsMyQueue <T>
{
public:
	void push(T Val)
	{
		clsMyQueue<T>::Queue.InsertAtBeginning(Val);
	}

	T Top()
	{

		clsMyQueue<T>::front();
	}

	T Bottom()
	{
		clsMyQueue<T>::back();
	}
};

