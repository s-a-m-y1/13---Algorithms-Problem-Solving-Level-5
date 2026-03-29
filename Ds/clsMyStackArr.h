#pragma once
#include<iostream>
#include"clsMyQueueArr.h"
template<class T>
class clsMyStackArr:public clsMyQueueArr<T>
{
public:
	void Push(T Val)
	{
		this->clsMyQueueArr<T>::_My_Queue.InsertAtBeginnig(Val);
	}
	T Top()
	{

		return 	clsMyQueueArr<T>::front();
	}

	T Bottom()
	{
		return	clsMyQueueArr<T>::back();
	}
};

