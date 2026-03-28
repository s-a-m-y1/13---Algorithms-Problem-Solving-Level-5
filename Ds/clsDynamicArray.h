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
			cout << " " << Original_Array[i] << endl;

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

	bool DeleteItem(int Item)
	{
		if (Item >= _Size || Item < 0)return false;
	_Size--;

	_Temp_Array = new T[_Size];

	for (int i = 0;i < Item;i++)
	{
	_Temp_Array[i] = Original_Array[i];

	}
	for (int i = Item + 1;i < _Size+1;i++)
	{
		_Temp_Array[i - 1] = Original_Array[i];
	}
	delete[] Original_Array;

	Original_Array = _Temp_Array;
	return true;
	}

	bool DeleteFirstItem( )
	{

		if (DeleteItem(0))
		{
			
			return true;
		}
		return false;
	}
	bool DeleteLastItem( )
	{
		if (DeleteItem(_Size-1))
		{
			
			return true;

		}
		return false;

	}
	///  Find Array If IS true return Val IS Not return -1 
int	FindByVal(T Val )
	{
		for (int i = 0; i < _Size;i++)
		{
			if (Val==Original_Array[i])
			{
				return i;
			}
		}
		return -1;
	  	
    }

bool DeleteItemByVal(T Val)
{
	int Index = FindByVal(Val);/// Index 
	if (DeleteItem(Index))
	{
		return true;
    }
	return false;

}
bool Insert(int Index, T Val)
{
	if (IsEmpty())return false;
	/// Filter =
	Index = (Index < 0) ? 0 : (Index >= _Size) ? _Size - 1 : Index;
	_Size++;
	_Temp_Array = new T[_Size];
	for (int i = 0;i < Index; i++)
	{
		_Temp_Array[i] = Original_Array[i];

	}
	_Temp_Array[Index] = Val;
	for (int i = Index ;i < _Size - 1;i++)///for (int i = Index ;i < _Size - 1;i++)
	{
		_Temp_Array[i + 1] = Original_Array[i];

	}

	delete[] Original_Array;
	Original_Array = _Temp_Array;
	return true;
}

};

/*Size9
 1
 2
 3
 4
 5
 6
 7
 8
 9


  1
 10
 3
 4
 5
 6
 7
 8
 9
 -33686019


A:\13 - Algorithms & Problem Solving Level 5\Ds\x64\Debug\Ds.exe (process 1704) exited with code 0 (0x0).
To automatically c*/