// AtlClientApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#import "AtlServerLib.tlb" no_namespace named_guids

int main()
{
	CoInitialize(NULL);

	{
		ICalculatorPtr pCalculator(__uuidof(Calculator));

		std::cout << "1 + 2 = " << pCalculator->Add(1, 2) << std::endl;
		std::cout << "1 + ... + 10 = " << pCalculator->Sum(1, 10) << std::endl;
	}

	CoUninitialize();
    return 0;
}

