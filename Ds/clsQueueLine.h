#pragma once
#include<iostream>
#include<string>
#include<queue>
#include<stack>
#include"clsDate.h"
using namespace std;
class clsQueueLine
{
private:
	string _Prefix = "";///example A0>>>>>
	int _IssuedTicketsCount = 0;     
	int _ServedClientsCount = 0;     /// al baky
	int _AverageServeTime = 0;/// Minutes
	int _WatingClient = 0;
	
	struct _stTicket
	{
		string _ClientCode = "";
		string _DateTime = "";
		int _WaitingClients = 0;
		int _ServedTimeInMinutes = 0;
	};
	_stTicket Ticket;
	queue<_stTicket>_QTicket;

	void _PrintTicket(_stTicket Ticket1)
	{
		cout << "\t\t|=========================|" << endl;
		cout << "\t\t\t " << Ticket1._ClientCode << endl;
		cout << "\t\t|=========================|" << endl;
		cout << "\t\t" << Ticket1._DateTime << endl;
		cout << "\t\tWating Client = " << Ticket1._WaitingClients << endl;
		cout << "\t\tServe Time In " << Ticket1._ServedTimeInMinutes << "Minutes" << endl;
		cout << "\t\t|=========================|" << endl;
	}
public:


	clsQueueLine(string prefix, int AverageServeTime)
	{
		_Prefix = prefix;

		_AverageServeTime = AverageServeTime;
	}

	void IssueTicket()
	{
		string Code = _Prefix + to_string(_IssuedTicketsCount);

		string  DateTime = clsDate::DateAndTime();

		int watingClient = _QTicket.size() ;

		Ticket._ClientCode = Code;
		Ticket._DateTime = DateTime;
		Ticket._ServedTimeInMinutes = watingClient* _AverageServeTime;
		Ticket._WaitingClients = watingClient;


		_QTicket.push(Ticket);
		_IssuedTicketsCount++;

	}

	void ServeNextClient()
	{
	
		if (!_QTicket.empty())
		{
			_ServedClientsCount++;
			_QTicket.pop();
		}
		

	}

	void printInfo()const
	{
		cout << "\n\t\t|=========================|" << endl;
		cout << "\t\t       Queue Info        " << endl;
		cout << "\t\t|=========================|" << endl;

		cout << "\t\t  Prefix         : " << _Prefix << endl;
		cout << "\t\t  Total Tickets  : " << _IssuedTicketsCount << endl;
		cout << "\t\t  Served Clients : " << _ServedClientsCount << endl;
		cout << "\t\t  Waiting Clients: " << _QTicket.size() << endl;

		cout << "\t\t|=========================|" << endl;

	}
	void PrintAllTickets()
	{
		if (_QTicket.empty())
		{
			cout << "\n\t\t--- No Tickets in Queue ---" << endl;
			return;
		}
		queue<_stTicket>qTicket = _QTicket;

	
		while (!qTicket.empty())
		{
			_PrintTicket(qTicket.front());
			qTicket.pop();
		}

	}
	void printTicketLineRTL()
	{

		if (_QTicket.empty())
		{
			cout << "\n\t\t--- No Tickets in Queue ---" << endl;
			return;
		}

		queue<_stTicket>CpOr = _QTicket;
		stack<_stTicket> Revres;
		while (!CpOr.empty())
		{

			Revres.push(CpOr.front());
			CpOr.pop();
		}
		
		
		while (!Revres.empty())
		{
			_stTicket Code = Revres.top();
			cout << Code._ClientCode << "-->";
			Revres.pop();
		
		}
	}
	void printTicketLineLTR()
	{
		if (_QTicket.empty())
		{
			cout << "\n\t\t--- No Tickets in Queue ---" << endl;
			return;
		}
		queue<_stTicket>CpOr = _QTicket;
		while (!CpOr.empty())
		{
			_stTicket Code = CpOr.front();
			cout << Code._ClientCode << "-->";
			_QTicket.pop();

		}
     }

};
	
