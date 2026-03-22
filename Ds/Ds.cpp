
#include <iostream>
using namespace std;
#include"clsDblLinkedList.h"
int main()
{
	clsDblLinkedList<string>Db;
	if (Db.ISEmpty())
	{
		cout << "Empty";
	}
	else
	{
		cout << " Notempty";
	}
	Db.InsertAtBeginning("sasa");

	if (Db.ISEmpty())
	{
		cout << "Empty";
	}
	else
	{
		cout << " Notempty";
	}
}
//git@github.com:s-a-m-y1/13---Algorithms-Problem-Solving-Level-5.git