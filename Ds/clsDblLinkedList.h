
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
			cout << hold->Val<<endl;

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

	void Clear()
	{

		while (_Size > 0)
		{
			DeleteFitstNode();


		}

	}

	void Revers()
	{
		if (Head == nullptr)
		{
			return;
		}
		Node* Ptr_Node = Head;
		Node* prev_Node = nullptr;

		while (Ptr_Node != nullptr)
		{
			prev_Node = Ptr_Node->Prev;/// null ? ' the prev_node point null before 

			Ptr_Node->Prev = Ptr_Node->Next;///here prev Storage at prev adderss Edit 
			Ptr_Node->Next = prev_Node; /// here next  = 

			Ptr_Node = Ptr_Node->Prev;

		}
		if (prev_Node != nullptr)
		{
			Head = prev_Node->Prev;
		}
	}

	Node* GetNode(int Index)
	{
		if (Head == nullptr || Index > _Size - 1 || Index < 0)return nullptr;
		Node* Current = Head;
		int counter = 0;
		while (Current != nullptr && (Current->Next != nullptr))
		{
			if (counter == Index) break;

			Current = Current->Next;
			counter++;
		}
		return Current;


	}


	T GetItem(int ItemOf)
	{
		Node* NodeOfItem = GetNode(ItemOf);
		if (NodeOfItem == nullptr) return 0 ;
		return NodeOfItem->Val;
	}
	
	bool UpdateItem(int Index , T Update)
	{

		Node* NodeUpdate = GetNode(Index);
		if (NodeUpdate == nullptr) 
		return false;
		else
		NodeUpdate->Val = Update;
		return true;
	}
	/// <summary>
	/// CLEAN CODE 
	/// </summary>
	/// <param name="Index"></param>
	/// <param name="Val"></param>
	/// 
	///
	bool InsertAfter(int Index  , T Val )
	{
		Node* Newinser = GetNode(Index);
		if (Newinser==nullptr)
		{
			return false;

		}
		else
		InsertAfter(Newinser, Val);
		return true;

		
	}

};	