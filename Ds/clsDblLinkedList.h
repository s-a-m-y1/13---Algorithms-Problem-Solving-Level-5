
#pragma once
using namespace std;
template <class T>
class clsDblLinkedList
{
protected:
	int _Size = 0;

public:
	class Node
	{

	public:

		T Val;
		Node* Next;
		Node* Prev;
	};

	Node* Head = nullptr;

	void InsertAtBeginning(T Val)
	{
		Node* FirstN = new Node();
		FirstN->Next = Head;

		FirstN->Prev = nullptr;
		FirstN->Val = Val;
		if (Head != nullptr)
		{
			Head->Prev = FirstN;
		}
		Head = FirstN;
		_Size++;
	}
	Node* Find(T Val)
	{
		Node* FindNode = Head;
		if (Head == nullptr) return nullptr;

		while (FindNode != nullptr)
		{
			if (FindNode->Val == Val)return FindNode;
			FindNode = FindNode->Next;
		}
		return FindNode;
	}
	void InsertAfter(Node* Find_Node, T Val)
	{
		Node* NewNode = new Node();
		NewNode->Val = Val;
		NewNode->Next = Find_Node->Next;
		NewNode->Prev = Find_Node;
		if (Find_Node->Next != nullptr)
		{
			Find_Node->Next->Prev = NewNode;
		}
		Find_Node->Next = NewNode;
		_Size++;
	}
	void InsertAtEnd(T Val)
	{
		Node* End = new Node();
		End->Val = Val;
		End->Next = nullptr;
		if (Head == nullptr)
		{
			Head = End;
			End->Prev = nullptr;
			return;
		}
		Node* Hold = Head;
		while (Hold->Next != nullptr)
		{
			Hold = Hold->Next;
		}
		Hold->Next = End;
		End->Prev = Hold;
		_Size++;
		return;
	}
	void DeleteNode(Node*& Find_delete)
	{
		if (Head == nullptr || Find_delete == nullptr) return;

		if (Find_delete == Head) Head = Find_delete->Next;

		if (Find_delete->Next != nullptr)
			Find_delete->Next->Prev = Find_delete->Prev;

		if (Find_delete->Prev != nullptr)
			Find_delete->Prev->Next = Find_delete->Next;
		_Size--;
		delete Find_delete;
	}
	void DeleteFitstNode()
	{
		if (Head == nullptr)return;
		Node* DeleteFirist = Head;
		Head = Head->Next;
		if (Head != nullptr)
		{
			Head->Prev = nullptr;
		}
		_Size--;
		delete DeleteFirist;
	}
	void DeleteLastNode()
	{
		if (Head == nullptr)return;

		if (Head->Next == nullptr)
		{
			delete Head;
			Head = nullptr;
			return;
		}
		Node* DeleteLast = Head;
		while (DeleteLast->Next->Next != nullptr)
		{
			DeleteLast = DeleteLast->Next;
		}
		Node* Temp = DeleteLast->Next;
		delete Temp;
		DeleteLast->Next = nullptr;
		_Size--;
	}
	void PrintList()
	{
		Node* hold = Head;
		while (hold != nullptr)
		{
			cout << hold->Val << endl;

			hold = hold->Next;
		}
	}

	int Size()
	{
		return _Size;
	}

	bool ISEmpty()
	{
		
		return(Head == nullptr && _Size == 0) ? true : false;
	}
};	
