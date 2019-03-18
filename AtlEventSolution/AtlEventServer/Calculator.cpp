// Calculator.cpp : Implementation of CCalculator

#include "stdafx.h"
#include "Calculator.h"


// CCalculator

STDMETHODIMP CCalculator::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ICalculator
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


STDMETHODIMP CCalculator::Sum(LONG a, LONG z, LONG* rlt)
{
	// TODO: Add your implementation code here

	OLECHAR msg[256];
	wsprintf(msg, L"Sum from %ld to %ld requested.", a, z);
	Fire_EventStatus(msg);

	*rlt = 0;
	for (LONG i = a; i <= z; ++i)
	{
		*rlt += i;

		Fire_EventProgress(i, *rlt);
	}

	Fire_EventStatus(L"Sum is computed.");

	return S_OK;
}


STDMETHODIMP CCalculator::Div(LONG x, LONG y, LONG* rlt)
{
	// TODO: Add your implementation code here
	OLECHAR msg[256];
	wsprintf(msg, L"Operation %ld / %ld requested...", x, y);
	Fire_EventStatus(msg);

	if (y == 0)
	{
		Error(L"Error - Division by Zero!");
		return E_FAIL;
	}

	*rlt = x / y;

	wsprintf(msg, L"Operation %ld / %ld successful.", x, y);
	Fire_EventStatus(msg);

	return S_OK;
}
