// JJJJDlg.h : header file
//

#if !defined(AFX_JJJJDLG_H__EDF88982_1967_47AC_B267_A1476C73B0B5__INCLUDED_)
#define AFX_JJJJDLG_H__EDF88982_1967_47AC_B267_A1476C73B0B5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CJJJJDlg dialog

class CJJJJDlg : public CDialog
{
// Construction
public:
	CString num3str;
	CString num2str;
	double num3;
	double num2;
	double strtod(CString str, int kind);
	double num1;
	CString num1str;
	bool newput;
	char method[10];
	int datekind;
	bool po;
	CJJJJDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CJJJJDlg)
	enum { IDD = IDD_JJJJ_DIALOG };
	CString	m_input;
	CString	m_tip;
	CString	m_ps;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJJJJDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CJJJJDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void On1();
	afx_msg void On2();
	afx_msg void On3();
	afx_msg void On4();
	afx_msg void On5();
	afx_msg void On6();
	afx_msg void On7();
	afx_msg void On8();
	afx_msg void On9();
	afx_msg void Onpoint();
	afx_msg void Onadd();
	afx_msg void Onsub();
	afx_msg void Onmul();
	afx_msg void Ondev();
	afx_msg void Onrestart();
	afx_msg void OnRadio10();
	afx_msg void OnRadio2();
	afx_msg void OnRadio8();
	afx_msg void OnRadio16();
	afx_msg void OnMenuitemguanyu();
	afx_msg void Onjdu();
	afx_msg void Onhdu();
	afx_msg void Onback();
	afx_msg void Oneq();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JJJJDLG_H__EDF88982_1967_47AC_B267_A1476C73B0B5__INCLUDED_)
