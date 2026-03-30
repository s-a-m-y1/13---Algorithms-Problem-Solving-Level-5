#pragma once
#include<iostream>
#include<stack>
#include<queue>
#include<string>
#include"clsDate.h"
#include"clsClientPaper.h"
using namespace std;
class clsQueueLine
{
	/// counter And this  Code //
	int _TotalTickets = 0;
	int _ServedTime_Minutes = 0;
	int _ServedClient = 0;
	string _Perefix;

	queue <clsClientPaper>_QueueTickets;
	void printScreen(clsClientPaper&Ticket)
	{
		cout << "\n===========================" << endl;
		cout << "\t\t" << Ticket.CLient_Code << endl;
		cout << "\n===========================" << endl;
		cout << " " << Ticket.DateAndTime << endl;
		cout << "WatingClient : " << Ticket.watingClient << endl;
		cout << "SarveTm Min  : " << Ticket._ServeTimeIn << endl;
		cout << "\n===========================" << endl;
	}

public:
	clsQueueLine(string Perefix, int minutes) 
	{
		_Perefix =  Perefix;
		_ServedTime_Minutes = minutes;
	}

	void IssueTiket()
	{
		///  This convert Tiket
		string Code = _Perefix + to_string(_TotalTickets);
		string dateATime = clsDate::DateAndTime();
		int Wating = _QueueTickets.size();
		int WatingTime = Wating * _ServedTime_Minutes;
		
		clsClientPaper Ticket(Code, dateATime, Wating, WatingTime);
		_QueueTickets.push(Ticket);
		_TotalTickets++;
	}
	void printTiketRTL()
	{
	
		if (_QueueTickets.empty())
		{
			cout << "Empty";
			return;
		}

		queue <clsClientPaper>Temp = _QueueTickets;

			while (!Temp.empty())
			{
			
				clsClientPaper Ticket = Temp.front();
				cout << " " << Ticket.CLient_Code << "<--";
				Temp.pop();
			}
		
			
	}

	void printTiketLTR()
	{
		if (_QueueTickets.empty())
		{
			cout << "Empty";
			return;
		}

		// 1. بنستخدم Stack عشان نعكس الترتيب
		stack<clsClientPaper> s;
		queue<clsClientPaper> Temp = _QueueTickets;

		// 2. بننقل من الـ Queue للـ Stack
		while (!Temp.empty())
		{
			s.push(Temp.front());
			Temp.pop();
		}

		// 3. بنطبع من الـ Stack (هيطلعوا بالعكس LTR)
		while (!s.empty())
		{
			cout << "--> " << s.top().CLient_Code << " ";
			s.pop();
		}
	}
	

	void printInfo()
	{
		// ملاحظة: الـ _wateClient محتاج يتحدث بناء على الحجم الحالي للطابور
		int currentWaiting = _QueueTickets.size();

		cout << "\n\t\t:================:" << endl;
		cout << "\t\t   Queue Info" << endl;
		cout << "\n\t\t:================:" << endl;
		cout << "\t\t Prefix       : " << _Perefix << endl;
		cout << "\t\t Total Tickets: " << _TotalTickets << endl;
		cout << "\t\t Served Clients: " << _ServedClient << endl;
		cout << "\t\t Waiting Clients: " << currentWaiting << endl; // الأفضل تستخدم size() مباشرة
		cout << "\n\t\t:================:" << endl;
	}
	clsClientPaper	 ServeNextClient()
	{
		if (!_QueueTickets.empty())
		{
			clsClientPaper ServeNext = _QueueTickets.front();
		     
			_QueueTickets.pop();
			_ServedClient++;
			return ServeNext;
		}
		
		return clsClientPaper("", "", 0, 0);

	}
	void pritAllTiketd()
	{
		if (_QueueTickets.empty())
		{
			cout << "Empty";
			return;
		}

		queue <clsClientPaper>Temp = _QueueTickets;

		while (!Temp.empty())
		{
			clsClientPaper Ticket = Temp.front();
			printScreen(Ticket);
			Temp.pop();
		}

	}



};

