
#include <iostream>
using namespace std;
#include"clsDblLinkedList.h"
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
	clsMyQueue<string>Queue;
	//
	Queue.Push("ssss");
	Queue.Push("aaaa");
    Queue.Push("mmmm");
	Queue.Push("yyyy");
	Queue.print();
	cout << "Size : " << Queue.Size() << endl;
	cout << "Front : " << Queue.front() << endl;
	cout << "back : " << Queue.back() << endl;
	Queue.pop();
	cout << "After Pop FIFO : " << endl;
	Queue.print();
	Queue.UpdateItem(1, "I'm");
	Queue.print();
	Queue.InsertatFront("sss");
	Queue.print();
	Queue.Insertatback("yyy");
	Queue.print();
	Queue.GetItem(2);
	Queue.print();
	Queue.Revers();
	Queue.print();
	Queue.InsertAfter(2 ,  "help. . . ");
	Queue.print();
	Queue.Clear();
	Queue.print();
}
//git@github.com:s-a-m-y1/13---Algorithms-Problem-Solving-Level-5.git

//s-a-m-y1	