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
		this->clsMyQueue<T>::Queue.InsertAtBeginning(Val);
	}

	T Top()
	{

	return 	clsMyQueue<T>::front();
	}

	T Bottom()
	{
	return	clsMyQueue<T>::back();
	}
};

