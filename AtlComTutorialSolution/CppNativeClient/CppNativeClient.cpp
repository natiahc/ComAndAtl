// CppNativeClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	CoInitialize(NULL);
	{
		ComSvr::ICalculatorPtr pCal(__uuidof(ComSvr::Calculator));
		ComSvr::ICalculatorPtr pCalculator;

		pCalculator.CreateInstance(ComSvr::CLSID_Calculator);

		std::cout << "1+...+10 = " << pCal->Sum(1, 10) << std::endl;
		std::cout << "1+...+20 = " << pCalculator->Sum(1, 20) << std::endl;
	}
	CoUninitialize();

    return 0;
}

