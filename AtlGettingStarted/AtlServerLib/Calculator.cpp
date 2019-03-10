// Calculator.cpp : Implementation of CCalculator

#include "stdafx.h"
#include "Calculator.h"


// CCalculator



STDMETHODIMP CCalculator::Add(LONG x, LONG y, LONG* rlt)
{
	// TODO: Add your implementation code here
	
	*rlt = x + y; 

	return S_OK;
}


STDMETHODIMP CCalculator::Sum(LONG a, LONG z, LONG* rlt)
{
	// TODO: Add your implementation code here

	*rlt = 0;

	for (LONG i = a; i <= z; i++) *rlt += i;

	return S_OK;
}
