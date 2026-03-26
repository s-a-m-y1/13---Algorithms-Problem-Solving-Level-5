
#include <iostream>
using namespace std;
#include"clsDblLinkedList.h"
#include"clsMyStack.h"
#include"clsDynamicArray.h"
#include"clsMyQueue.h"
int main()
{
	//clsDblLinkedList<string>Db;
	//Db.InsertAtBeginning("samy:>");
	//Db.InsertAtBeginning("sam:>");
	//Db.InsertAtBeginning("semsem:>");
	//Db.InsertAtBeginning("samsemo:>");
	//Db.PrintList();
	//cout << "\nValIs = " << Db.GetItem(2) << endl;
	//Db.UpdateItem(2, ":::::");
	//Db.PrintList();
	//cout << endl << endl;
	//Db.InsertAfter(2, "KOKO");
	//Db.PrintList();
//	clsMyQueue<string>Queue;
//	//
//	Queue.Push("ssss");
//	Queue.Push("aaaa");
//    Queue.Push("mmmm");
//	Queue.Push("yyyy");
//	Queue.print();
//	cout << "Size : " << Queue.Size() << endl;
//	cout << "Front : " << Queue.front() << endl;
//	cout << "back : " << Queue.back() << endl;
//	Queue.pop();
//	cout << "After Pop FIFO : " << endl;
//	Queue.print();
//	Queue.UpdateItem(1, "I'm");
//	Queue.print();
//	Queue.InsertatFront("sss");
//	Queue.print();
//	Queue.Insertatback("yyy");
//	Queue.print();
//	Queue.GetItem(2);
//	Queue.print();
//	Queue.Revers();
//	Queue.print();
//	Queue.InsertAfter(2 ,  "help. . . ");
//	Queue.print();
//	Queue.Clear();
//	Queue.print();
	//clsMyStack<string>Stack;
	//Stack.push("samy");
	//Stack.push("Git");
	//Stack.push("GitHub");
	//Stack.push("Repo");
	//Stack.print();
	//cout << "-------------------------------" << endl;
	//cout << "Size : " << Stack.Size() << endl;
	//cout << "Top : " << Stack.Top() << endl;
	//cout << "Bottom : " << Stack.Bottom() << endl;
	//cout << "-------------------------------" << endl;
	//Stack.Revers();
	//Stack.print();
	clsDynamicArray<int>ll(9);
	
	ll.SetItem(0,1);
	ll.SetItem(1, 2);
	ll.SetItem(2, 3);
	ll.SetItem(3, 4);
	ll.SetItem(4, 5);
	ll.SetItem(5, 6);
	ll.SetItem(6, 7);
	ll.SetItem(7, 8);
	ll.SetItem(8, 9);

	cout << "Size" << ll.Size() << endl;
	ll.PrintList();
	//cout << endl;
	//cout << "This Ietem : " << ll.GetItem(0) << endl;
	cout<<"The Val = "<< ll.FindByVal(3) << endl;
	

	ll.DeleteItemByVal(3);

	//ll.Revers();
	ll.PrintList();
	 
	//ll.Clear();
	//cout << endl;
	//cout << endl;
	//ll.DeleteItem(3);
	//ll.PrintList();
	//cout << "\n\nSize" << ll.Size() << endl;

	//cout << "\n\nFirst:}" << endl;
	//ll.DeleteFirstItem();
	//ll.PrintList();

	//cout << "\n\nLasy:}" << endl;
	//ll.DeleteLastItem();
	//ll.PrintList();
	//cout << "\nAfter :)\n" << endl;

	//ll.Resize(10);
	//ll.PrintList();
	//cout << "\nSize" << ll.Size() << endl;

	//ll.Resize(100);
	//ll.PrintList();
	//cout << "\nSize" << ll.Size() << endl;

}
//git@github.com:s-a-m-y1/13---Algorithms-Problem-Solving-Level-5.git

//s-a-m-y1	