
#include <iostream>
using namespace std;
//#include"clsDblLinkedList.h"
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
	Queue.Push("ssss");
	Queue.Push("aaaa");
	Queue.Push("mmmm");
	Queue.Push("yyyy");
	//Queue.Print();
	//cout << "Size : " << Queue.Size() << endl;
	//cout << "Front : " << Queue.front() << endl;
	//cout << "back : " << Queue.back() << endl;
	Queue.pop();
	Queue.Print();
}
//git@github.com:s-a-m-y1/13---Algorithms-Problem-Solving-Level-5.git

//s-a-m-y1 