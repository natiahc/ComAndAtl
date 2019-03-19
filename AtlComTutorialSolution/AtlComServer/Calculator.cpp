// Calculator.cpp : Implementation of CCalculator

#include "stdafx.h"
#include "Calculator.h"


// CCalculator



STDMETHODIMP CCalculator::Sum(LONG x, LONG y, LONG* rlt)
{
	// TODO: Add your implementation code here
	*rlt = 0;
	for (long i = x; i <= y; ++i)
	{
		*rlt += i;
	}

	return S_OK;
}
