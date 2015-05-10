// JJJJ.h : main header file for the JJJJ application
//

#if !defined(AFX_JJJJ_H__886AD3C0_47F7_499B_94F9_51461FAADE78__INCLUDED_)
#define AFX_JJJJ_H__886AD3C0_47F7_499B_94F9_51461FAADE78__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CJJJJApp:
// See JJJJ.cpp for the implementation of this class
//

class CJJJJApp : public CWinApp
{
public:
	CJJJJApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJJJJApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CJJJJApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JJJJ_H__886AD3C0_47F7_499B_94F9_51461FAADE78__INCLUDED_)
