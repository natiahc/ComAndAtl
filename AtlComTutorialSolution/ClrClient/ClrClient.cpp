// ClrClient.cpp : main project file.

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	ComSvr::Calculator^ hCal = gcnew ComSvr::CalculatorClass();
    Console::WriteLine(L"1+...+100={0}", hCal->Sum(1, 100));
    return 0;
}
