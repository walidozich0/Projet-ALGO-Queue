
// VisualQueueGUI.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CVisualQueueGUIApp:
// See VisualQueueGUI.cpp for the implementation of this class
//

class CVisualQueueGUIApp : public CWinApp
{
public:
	CVisualQueueGUIApp();

// Overrides
public:
	virtual BOOL InitInstance();
	virtual BOOL ExitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()

private:
	GdiplusStartupInput gdiplusStartupInput;
	ULONG_PTR gdiplusToken;
};

extern CVisualQueueGUIApp theApp;
