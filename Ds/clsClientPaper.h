#pragma once
#include<queue>
#include<string>
using namespace std;
class clsClientPaper
{                                                               
private:
	struct _St_PaperClient
	{
		string _CLient_Code = "";

		string _DateAndTime = "";

		int _watingClient = 0;///كم عدد الي قبلك 

		int _ServeTimeIn = 0;//ظ وقت الانتظار

	};
	/// <summary>
	///  Enc
	/// </summary>
	
public:
	_St_PaperClient _PaperClient;


	void Set_CLientCode(string Pass )
	{
		_PaperClient._CLient_Code = Pass;

	}

	string Get_CLientCode()
	{
		return _PaperClient._CLient_Code;

    }

	__declspec(property(get = Get_CLientCode, put = Set_CLientCode))string CLient_Code;



	void Set_DateTime(string Pass )
	{
		 _PaperClient._DateAndTime = Pass;
	}

	string Get_DateTime()
	{
		return  _PaperClient._DateAndTime;

	}
	__declspec(property(get = Get_DateTime, put = Set_DateTime))string DateAndTime;




	void Set_ServeTimeIn(int Pass)
	{
		_PaperClient._ServeTimeIn = Pass;
	}

	int Get_ServeTimeIn()
	{

		return _PaperClient._ServeTimeIn;
	}

	__declspec(property(get = Get_ServeTimeIn, put = Set_ServeTimeIn))int _ServeTimeIn;



	void Set_watingClient(int Pass)
	{

		_PaperClient._watingClient = Pass;
	}

	int Get_watingClient()
	{

		return 	_PaperClient._watingClient;
	}
	__declspec(property(get = Get_watingClient, put = Set_watingClient))int watingClient;
	clsClientPaper(string CLient_Code , string DateAndTime ,int watingClient , int ServeTimeIn)
	{
		_PaperClient._CLient_Code = CLient_Code;
		
		_PaperClient._DateAndTime = DateAndTime;
		_PaperClient._watingClient = watingClient;
		_PaperClient._ServeTimeIn = ServeTimeIn;
	}
};

