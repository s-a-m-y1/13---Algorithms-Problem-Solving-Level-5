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

	clsDynamicArray(int Size = 0)
	{
		_Size = (Size < 0) ? 0 : Size;


		Original_Array = new T[_Size];

	}

	~clsDynamicArray()
	{
		delete[]Original_Array;
	}

	bool SetItem(int Index, T Val)
	{
		return (Index >= _Size || _Size < 0) ? false : (Original_Array[Index] = Val, true);
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
		for (int i = 0; i <= _Size - 1; i++)
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
		_Temp_Array = new T[_Size];
		int counter = 0;
		for (int i = _Size - 1; i > 0;i--)
		{
			_Temp_Array[counter] = Original_Array[i];
			counter++;
		}
		delete[]Original_Array;
		Original_Array = _Temp_Array;
	}
	void Clear()
	{
		_Size = 0;
		_Temp_Array = new T[0];
		delete[]Original_Array;
		Original_Array = _Temp_Array;

	}

	T GetItem(int Index)
	{
		if (IsEmpty())return T();

		return(Index < 0) ? Original_Array[0] : (Index >= _Size) ? Original_Array[_Size - 1] : Original_Array[Index];

	}
	void DeleteItem(int Item)
	{
		if (IsEmpty())return;
		Item = (Item < 0) ? 0 : (Item >= _Size) ? _Size - 1 : Item;

		_Temp_Array = new T[_Size - 1];
		int counetr = 0;
		for (int i = 0;i < _Size ;i++)
		{
			
			if (i == Item)
			{
			continue;
			}
			_Temp_Array[counetr] = Original_Array[i];
			counetr++;
		}
		_Size= counetr;
		delete[]Original_Array;
		Original_Array = _Temp_Array;
	}
};

//// Size9
//15 54 53 45 45 45 56 15 123
//
/// 3 /// 0 1 2 3 -1  0 1 2 /// 


/*void Revers()
{

	
	for (int i = 0; i < _Size / 2;i++)
	{
		T Temp = Original_Array[i];

		Original_Array[i] = Original_Array[_Size - 1 - i];
		Original_Array[_Size - 1 - i] = Temp;
	}
	
}*/

/*void Clear()
{
	_Size = 0;
	delete[]Original_Array;
	Original_Array = nullptr;
}*/