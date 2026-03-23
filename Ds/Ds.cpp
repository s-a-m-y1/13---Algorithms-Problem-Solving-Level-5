
#include <iostream>
using namespace std;
#include"clsDblLinkedList.h"
int main()
{
	clsDblLinkedList<string>Db;
	Db.InsertAtBeginning("samy:>");
	Db.InsertAtBeginning("sam:>");
	Db.InsertAtBeginning("semsem:>");
	Db.InsertAtBeginning("samsemo:>");
	Db.PrintList();
	cout << "\nValIs = " << Db.GetItem(2) << endl;
	Db.UpdateItem(2, ":::::");
	Db.PrintList();
}
//git@github.com:s-a-m-y1/13---Algorithms-Problem-Solving-Level-5.git

//s-a-m-y1 