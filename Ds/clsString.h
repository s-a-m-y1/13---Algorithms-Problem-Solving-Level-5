	#pragma once
	#include<iostream>
	#include<string>
	#include"clsMyStack.h"

	class clsString
	{
	private:
		string _Last = "";
		clsMyStack<string>_Stack_Redo;
		clsMyStack<string>_Stack_Undo;
	public:
	
		 void SetValue (string Val )
		{ 
			 _Stack_Undo.push(_Last);
			 _Last = Val;
		}
	

		string GetValue()	
		{ 
			return _Last;
		}
		__declspec(property(get = GetValue, put = SetValue)) string Value;

		void Undo()
		{
			if (_Stack_Undo.Size() >= 1)
			{
				_Stack_Redo.push(_Last);


				_Last = _Stack_Undo.Top();

				_Stack_Undo.pop();
			}
			return;
		}

		void Redo()
		{
			if (_Stack_Redo.Size() >0)
			{
				_Stack_Undo.push(_Last);


				_Last = _Stack_Redo.Top();

				_Stack_Redo.pop();
			}
			return;
		}
	};
	///: LIFO (Last-In, First-Out).
