#include<iostream>
using namespace std;
template<class T >
class clsDynamicArray
{
	int _Size = 0;
protected:
	T* _Temp_Array = nullptr;
	T* Original_Array = nullptr;
public:

	clsDynamicArray(int Size =0 )
	{
		_Size = (Size < 0) ? 0 : Size;

		
		Original_Array = new T[_Size];

	}

	~clsDynamicArray()
	{
		delete[]Original_Array;
	}
   
	bool SetItem(int Index , T Val )
	{
		return (Index >= _Size || _Size < 0) ? false : (Original_Array[Index] = Val, true ) ;
	}

bool IsEmpty()
{
	return(_Size == 0);
}

int Size()
{
	return (_Size);
}
void PrintList()
{
	if (Original_Array == nullptr)
	{
		cout << "This Empty :) :) :) :) :) :)";
		return;
	}
	for (int i = 0; i <= _Size-1; i++)
	{
		cout << " " << Original_Array[i];
		
	}

}

void Resize(int NewResize)
{
	
	if (NewResize < 0)
	{
		NewResize = 0;
	};

	_Temp_Array = new T[NewResize];
	if (NewResize < _Size)
	
		_Size = NewResize;
	
	for (int i = 0;i < _Size;i++)
	{
		_Temp_Array[i] = Original_Array[i];
	}
	_Size = NewResize;
	delete[]Original_Array;
	Original_Array = _Temp_Array;
}

void Revers()
{
	//_Temp_Array = new T[_Size];
	
	for (int i = 0; i < _Size / 2;i++)
	{
		T Temp = Original_Array[i];

		Original_Array[i] = Original_Array[_Size - 1 - i];
		Original_Array[_Size - 1 - i] = Temp;
	}
	
}
void Clear()
{
	_Size = 0;
	delete[]Original_Array;
	Original_Array = nullptr;
}

T GetItem(int Index)
{
	if (IsEmpty())return T();

	return(Index < 0) ? Original_Array[0] : (Index >= _Size) ? Original_Array[_Size - 1] : Original_Array[Index];

}

};