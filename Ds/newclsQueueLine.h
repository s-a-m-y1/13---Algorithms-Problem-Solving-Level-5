#pragma once
#include<iostream>
#include<queue>
#include<stack>
#include<string>
#include"clsDate.h"
using namespace std;
class newclsQueueLine
{
private:
	short _AvregserveTime = 0;
	short _TotalTikets = 0;
	string _Prefix = "";
	class clsTicket
	{
	private:
		struct _StMembers
		{
			short _Nmuber = 0;
			short _WatingClients = 0;
			short _AvrageServeTime = 0;
			//short _ExpectedServeTime = 0;
			string _TicketTime = "";
		   string _Prefex = "";
		};
		_StMembers _Members;
		// Getrs only?;
	public:
		// Consractor()(()()(
		//ExpectedServeTime
		clsTicket(string Prefix  , short Number , short WatingClient , short AvrageServeTime )
		{
			_Members._TicketTime = clsDate::DateAndTime();
			_Members._Prefex = Prefix;
			_Members._Nmuber = Number;
			_Members._WatingClients = WatingClient;
			_Members._AvrageServeTime = AvrageServeTime;
		}

		// Getrs only?;
		short number() // number To Prefix
		{
			return _Members._Nmuber;
		}
		short WatingClients()//total only 
		{
			return _Members._WatingClients;
		}

		short AvrageServeTime()// Minutes
		{
			return _Members._AvrageServeTime;
		}
		string TicketsTime()// Date
		{
			return _Members._TicketTime;
		}

		short ExpectedServeTime()
		{
			return(AvrageServeTime() * WatingClients());// EXAMPLE  the minutes this Acthr 1 client   = 10 min * 10 clients  Add 1 client on this client 10 minutes emaple client 1  = 10 2=20/?
		}
		string FullCode()
		{
			return(_Members._Prefex + to_string(number()));
		}
		void Print()
		{
			cout << "\n\t\t\t  _______________________\n";
			cout << "\n\t\t\t\t    " << FullCode();
			cout << "\n\n\t\t\t    " << TicketsTime;
			cout << "\n\t\t\t    Wating Clients = " << WatingClients;
			cout << "\n\t\t\t      Serve Time In";
			cout << "\n\t\t\t       " << ExpectedServeTime() << " Minutes.";
			cout << "\n\t\t\t  _______________________\n";
		}



	};
public:
	queue <clsTicket> QueueLine;
	newclsQueueLine( string Prefix , short AvregserveTime)
	{
		_Prefix = Prefix;
		_TotalTikets = 0;
		_AvregserveTime = AvregserveTime;

	}

	int WathingClient()
	{
		return QueueLine.size();
	}
	////ExpectedServeTimeclsTicket(string Prefix, short Number, short WatingClient, short AvrageServeTime)
	void IssueTicket()
	{
		_TotalTikets++;
		clsTicket Ticket(_Prefix, _TotalTikets, WathingClient(), _AvregserveTime);
		QueueLine.push(Ticket);
	}
	int WaitingClients()
	{
		return QueueLine.size();

	}
	string WhoIsNext()
	{
		if (QueueLine.empty())
			return "No Clients Left.";
		else
			return QueueLine.front().FullCode();

	}
	bool ServeNextClient()
	{
		if (QueueLine.empty())
			return false;


		QueueLine.pop();

		return true;

	}
	short ServedClients()
	{
		return _TotalTikets - WaitingClients();
	}
	void PrintInfo()
	{
		cout << "\n\t\t\t _________________________\n";
		cout << "\n\t\t\t\tQueue Info";
		cout << "\n\t\t\t _________________________\n";
		cout << "\n\t\t\t    Prefix   = " << _Prefix;
		cout << "\n\t\t\t    Total Tickets   = " << _TotalTikets;
		cout << "\n\t\t\t    Served Clients  = " << ServedClients();
		cout << "\n\t\t\t    Wating Clients  = " << WaitingClients(); ;
		cout << "\n\t\t\t _________________________\n";
		cout << "\n";

	}

	void PrintTicketsLineRTL()
	{

		if (QueueLine.empty())
			cout << "\n\t\tTickets: No Tickets.";
		else
			cout << "\n\t\tTickets: ";

		//we copy the queue in order not to lose the original
		queue <clsTicket> TempQueueLine = QueueLine;


		while (!TempQueueLine.empty())
		{
			clsTicket Ticket = TempQueueLine.front();

			cout << " " << Ticket.FullCode() << " <-- ";

			TempQueueLine.pop();
		}

		cout << "\n";

	}
	void PrintTicketsLineLTR()
	{
		if (QueueLine.empty())
			cout << "\n\t\tTickets: No Tickets.";
		else
			cout << "\n\t\tTickets: ";

		//we copy the queue in order not to lose the original
		queue <clsTicket> TempQueueLine = QueueLine;
		stack <clsTicket> TempStackLine;

		while (!TempQueueLine.empty())
		{
			TempStackLine.push(TempQueueLine.front());
			TempQueueLine.pop();
		}

		while (!TempStackLine.empty())
		{
			clsTicket Ticket = TempStackLine.top();

			cout << " " << Ticket.FullCode() << " --> ";

			TempStackLine.pop();
		}
		cout << "\n";
	}
	void PrintAllTickets()
	{

		cout << "\n\n\t\t\t       ---Tickets---";

		if (QueueLine.empty())
			cout << "\n\n\t\t\t     ---No Tickets---\n";

		//we copy the queue in order not to lose the original
		queue <clsTicket> TempQueueLine = QueueLine;


		while (!TempQueueLine.empty())
		{
			TempQueueLine.front().Print();
			TempQueueLine.pop();
		}

	}


};

