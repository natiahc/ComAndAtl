// AtlExceptionClientApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#import "AtlExceptionServer.tlb" no_namespace named_guids

int main()
{
	CoInitialize(NULL);

	try
	{
		ICalculatorPtr pCal;
		
		pCal.CreateInstance(CLSID_Calculator);

		std::cout << "1 + 2 = " << pCal->Add(1, 2) << std::endl;
		std::cout << "8 / 2 = " << pCal->Div(8, 2) << std::endl;
		std::cout << "8 / 0 = " << pCal->Div(8, 0) << std::endl;
	}
	catch(_com_error e) // catch COM exception
	{
		std::cout << e.Description() << std::endl;
	}

	CoUninitialize();
    return 0;
}

