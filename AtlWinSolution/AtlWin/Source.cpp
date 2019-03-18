#include <atlbase.h>
#include <atlwin.h>

class CMainWindow : public CWindowImpl<CMainWindow>
{
	BEGIN_MSG_MAP(CMainWindow)
		MESSAGE_HANDLER(WM_CREATE, OnCreate)
		MESSAGE_HANDLER(WM_PAINT, OnPaint)
		MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
	END_MSG_MAP()
public:
	LRESULT OnCreate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	LRESULT OnPaint(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	LRESULT OnDestroy(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
};

LRESULT CMainWindow::OnCreate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	// TODO: Add your message handler code here and/or call default

	return 0;
}


LRESULT CMainWindow::OnPaint(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	// TODO: Add your message handler code here and/or call default
	PAINTSTRUCT ps;
	
	BeginPaint(&ps);
	
	HDC hdc = GetDC();

	RECT rc; GetClientRect(&rc);

	HBRUSH hbr = CreateSolidBrush(RGB(0x00, 0xFF, 0xFF));
	HBRUSH hOldBr = (HBRUSH)SelectObject(hdc, hbr);
	FillRect(hdc, &rc, hbr);
	SelectObject(hdc, hOldBr);
	DeleteObject(hbr);

	EndPaint(&ps);

	return 0;
}


LRESULT CMainWindow::OnDestroy(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	// TODO: Add your message handler code here and/or call default
	PostQuitMessage(0);

	return 0;
}

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	CMainWindow window;

	RECT rectPos = { 0, 0, 300, 300 };
	window.Create(NULL, rectPos, L"Main Window", WS_VISIBLE | WS_OVERLAPPEDWINDOW);

	MSG msg;
	while (GetMessage(&msg, 0, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}