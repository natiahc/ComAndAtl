// ClientApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

_ATL_FUNC_INFO OnEventProgressInfo = { CC_STDCALL, VT_EMPTY, 2, {VT_I4, VT_I4} };

_ATL_FUNC_INFO OnEventStatusInfo = { CC_STDCALL, VT_EMPTY, 1,{VT_BSTR} };

class CEventStatus :
	public IDispEventSimpleImpl<1, CEventStatus, &DIID__ICalculatorEvents>
{
private:
	ICalculatorPtr m_pCalculator;

public:
	CEventStatus(ICalculatorPtr pCal)
	{
		this->m_pCalculator = pCal;
		DispEventAdvise((IUnknown*)this->m_pCalculator);
	}

	~CEventStatus()
	{
		DispEventUnadvise((IUnknown*)this->m_pCalculator);
	}

	void __stdcall OnEventProgress(LONG idx, LONG val)
	{
		std::wcout << "Index: " << idx << ", Value: " << val << std::endl;
	}

	void __stdcall OnEventStatus(BSTR msg)
	{
		std::wcout << "Status: " << msg << std::endl;
		SysFreeString(msg);
	}

	// sink map
	BEGIN_SINK_MAP(CEventStatus)
		SINK_ENTRY_INFO(1, DIID__ICalculatorEvents, 2, OnEventProgress, &OnEventProgressInfo)
		SINK_ENTRY_INFO(1, DIID__ICalculatorEvents, 1, OnEventStatus, &OnEventStatusInfo)
	END_SINK_MAP()
};

int main()
{
	CoInitialize(NULL);

	try
	{
		ICalculatorPtr pCal(CLSID_Calculator);
		
		CEventStatus evtsts(pCal);

		LONG rlt = pCal->Sum(1, 10);

		std::wcout << "Rlt: " << rlt << std::endl;

		rlt = pCal->Div(8, 2);
		rlt = pCal->Div(8, 0);
	}
	catch(_com_error e)
	{
		std::wcout << e.Description() << std::endl;
	}

	CoUninitialize();
    return 0;
}

