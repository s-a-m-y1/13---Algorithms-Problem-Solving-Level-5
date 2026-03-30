#pragma once
#include<string>
#include<stack>
using namespace std;
class clsString
{
	/// Converts Stacks 
	stack<string>_Undo;
	stack<string>_Redo;
	string _Val = "";
	/// convert Encaclathon /  
public:
	void Set(string val )
	{
		_Undo.push(_Val);
		_Val = val;
	}

	string Get()
	{
		return _Val;
	}
	__declspec(property(get = Get, put = Set))string Value;
	void Undo()
	{
		if (!_Undo.empty())
		{
			/// Push To Redo Stack Because Need This 
			_Redo.push(_Val);

			/// Update VAl Screen To Show /

			_Val = _Undo.top();


			/// remove From Undo 

			_Undo.pop();
		}



	}
	void Redo()
	{
		if (!_Redo.empty())
		{
			/// Push To Undo Stack Because Need This 
			_Undo.push(_Val);

			/// Update VAl Screen To Show /

			_Val = _Redo.top();


			/// remove From Undo 

			_Redo.pop();
		}
	}

};

