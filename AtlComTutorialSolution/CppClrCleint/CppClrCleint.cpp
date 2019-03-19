// CppClrCleint.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	ComSvr::Calculator^ hCal = gcnew ComSvr::CalculatorClass();
	System::Console::WriteLine("1+...+10={0}", hCal->Sum(1, 10));
    return 0;
}

