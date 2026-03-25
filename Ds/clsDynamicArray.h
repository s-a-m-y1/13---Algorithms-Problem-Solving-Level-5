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
	if (Original_Array == nullptr)return;

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



//void Resize(int NewResize )
//{	
// 
// ///---------------------------------------------////
// NewResize = (NewResize > _Size) ? NewResize : (NewResize < 0) ? 0 : NewResize;

//_Temp_Array new T[NewResize];
//
//for (int i = 0; i < _Size;i++)
//{
//	_Temp_Array[i] = Original_Array[i];
//
//}
//
//_Size = NewResize;
//delete[] Original_Array;
//
//Original_Array = _Temp_Array;
//____________________________________
//	
//	NewResize = (NewResize > _Size) ? NewResize  : (NewResize < 0) ? _Size : NewResize;
//
//	
//	T* NewArray = new T[NewResize];
//
//	int ElementsToCopy = (NewResize < _Size) ? NewResize : _Size;
//	for (int i = 0 ; i <= ElementsToCopy -1; i++)
//	{
//		NewArray[i] = Original_Array[i];
//	}
//
//	delete[] Original_Array;
//	
//	Original_Array = NewArray;
//
//	_Size = NewResize;	
//
//
//}	

};