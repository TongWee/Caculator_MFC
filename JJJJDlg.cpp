// JJJJDlg.cpp : implementation file
//
#include "stdafx.h"
#include "JJJJ.h"
#include "JJJJDlg.h"
#include "math.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJJJJDlg dialog

CJJJJDlg::CJJJJDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CJJJJDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CJJJJDlg)
	m_input = _T("");
	m_tip = _T("");
	m_ps = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	po=false;
	newput=true;
	m_tip="欢迎使用科学计算器2.0版！";

}

void CJJJJDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CJJJJDlg)
	DDX_Text(pDX, IDC_EDIT1, m_input);
	DDX_Text(pDX, IDC_EDIT2, m_tip);
	DDX_Text(pDX, IDC_EDIT3, m_ps);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CJJJJDlg, CDialog)
	//{{AFX_MSG_MAP(CJJJJDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_1, On1)
	ON_BN_CLICKED(IDC_2, On2)
	ON_BN_CLICKED(IDC_3, On3)
	ON_BN_CLICKED(IDC_4, On4)
	ON_BN_CLICKED(IDC_5, On5)
	ON_BN_CLICKED(IDC_6, On6)
	ON_BN_CLICKED(IDC_7, On7)
	ON_BN_CLICKED(IDC_8, On8)
	ON_BN_CLICKED(IDC_9, On9)
	ON_BN_CLICKED(IDC_point, Onpoint)
	ON_BN_CLICKED(IDC_add, Onadd)
	ON_BN_CLICKED(IDC_sub, Onsub)
	ON_BN_CLICKED(IDC_mul, Onmul)
	ON_BN_CLICKED(IDC_dev, Ondev)
	ON_BN_CLICKED(IDC_tan3, Onrestart)
	ON_BN_CLICKED(IDC_RADIO10, OnRadio10)
	ON_BN_CLICKED(IDC_RADIO2, OnRadio2)
	ON_BN_CLICKED(IDC_RADIO8, OnRadio8)
	ON_BN_CLICKED(IDC_RADIO16, OnRadio16)
	ON_COMMAND(ID_MENUITEM32771, OnMenuitemguanyu)
	ON_BN_CLICKED(IDC_jdu, Onjdu)
	ON_BN_CLICKED(IDC_hdu, Onhdu)
	ON_BN_CLICKED(IDC_back, Onback)
	ON_BN_CLICKED(IDC_eq, Oneq)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJJJJDlg message handlers

BOOL CJJJJDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(false);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, true);			// Set big icon
	SetIcon(m_hIcon, false);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return true;  // return true  unless you set the focus to a control
}

void CJJJJDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CJJJJDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CJJJJDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}
void CJJJJDlg::On1() 
{
	UpdateData();
	if(newput) 
	{
		m_input="";
		newput=false;
	}
	
	m_input=m_input+"1";
	UpdateData(false);	
	// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::On2() 
{
		UpdateData();
	if(newput) 
	{
		m_input="";
		newput=false;
	}
	
	m_input=m_input+"2";
	UpdateData(false);	// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::On3() 
{
		UpdateData();
	if(newput) 
	{
		m_input="";
		newput=false;
	}
	
	m_input=m_input+"3";
	UpdateData(false);	// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::On4() 
{
		UpdateData();
	if(newput) 
	{
		m_input="";
		newput=false;
	}
	
	m_input=m_input+"4";
	UpdateData(false);	// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::On5() 
{
		UpdateData();
	if(newput) 
	{
		m_input="";
		newput=false;
	}
	
	m_input=m_input+"5";
	UpdateData(false);	// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::On6() 
{
		UpdateData();
	if(newput) 
	{
		m_input="";
		newput=false;
	}
	m_input=m_input+"6";
	UpdateData(false);	// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::On7() 
{
		UpdateData();
	if(newput) 
	{
		m_input="";
		newput=false;
	}	
	
	m_input=m_input+"7";
	UpdateData(false);	// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::On8() 
{
		UpdateData();
	if(newput) 
	{
		m_input="";
		newput=false;
	}
	
	m_input=m_input+"8";
	UpdateData(false);	// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::On9() 
{
		UpdateData();
	if(newput) 
	{
		m_input="";
		newput=false;
	}
	
	m_input=m_input+"9";
	UpdateData(false);	// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::Onpoint() 
{
	UpdateData();
	if(newput) 
	{
		m_input="";
		newput=false;
	}
	if (m_input.Find(".")==-1)
	{
		if (m_input=="")
		{
			m_input="0.";
		}
		else m_input=m_input+".";
	}
	 UpdateData(false);	// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::Onadd() 
{
	method[10]='+';
	newput=true;
	UpdateData();	
	num1str=m_input; 
	if(datekind==10) num1=atof(m_input);
	else num1=strtod(m_input,datekind);
	UpdateData(false);
// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::Onsub() 
{
	method[10]='-';
	newput=true;
	UpdateData();	
	num1str=m_input; 
	if(datekind==10) num1=atof(m_input);
	else num1=strtod(m_input,datekind);
	UpdateData(false);// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::Onmul() 
{
	method[10]='*';
	newput=true;
	UpdateData();	
	num1str=m_input; 
	if(datekind==10) num1=atof(m_input);
	else num1=strtod(m_input,datekind);
	UpdateData(false);// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::Ondev() 
{
	method[10]='/';
	newput=true;
	UpdateData();	
	num1str=m_input; 
	if(datekind==10) num1=atof(m_input);
	else num1=strtod(m_input,datekind);
	UpdateData(false);// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::Onrestart() 
{
	UpdateData(true);
	newput=true;
	num1=0;
	method[10]='0';
	m_input="0";
	m_tip="欢迎使用科学计算器2.0版！";
	m_ps="";
    UpdateData(false);	// TODO: Add your control notification handler code here
	
}


void CJJJJDlg::OnRadio10() 
{
	m_tip="已选择十进制！";
	UpdateData(false);
	datekind=10;
	GetDlgItem(IDC_2)->EnableWindow(true);
	GetDlgItem(IDC_3)->EnableWindow(true);
	GetDlgItem(IDC_4)->EnableWindow(true);
	GetDlgItem(IDC_5)->EnableWindow(true);
	GetDlgItem(IDC_6)->EnableWindow(true);
	GetDlgItem(IDC_7)->EnableWindow(true);
	GetDlgItem(IDC_8)->EnableWindow(true);
	GetDlgItem(IDC_9)->EnableWindow(true);



	GetDlgItem(IDC_a)->EnableWindow(false);
	GetDlgItem(IDC_b)->EnableWindow(false);
	GetDlgItem(IDC_c)->EnableWindow(false);
	GetDlgItem(IDC_d)->EnableWindow(false);
	GetDlgItem(IDC_e)->EnableWindow(false);
	GetDlgItem(IDC_f)->EnableWindow(false);



// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::OnRadio2() 
{
	m_tip="已选择二进制！";
	UpdateData(false);
	datekind=10;
	GetDlgItem(IDC_2)->EnableWindow(false);
	GetDlgItem(IDC_3)->EnableWindow(false);
	GetDlgItem(IDC_4)->EnableWindow(false);
	GetDlgItem(IDC_5)->EnableWindow(false);
	GetDlgItem(IDC_6)->EnableWindow(false);
	GetDlgItem(IDC_7)->EnableWindow(false);
	GetDlgItem(IDC_8)->EnableWindow(false);
	GetDlgItem(IDC_9)->EnableWindow(false);



	GetDlgItem(IDC_a)->EnableWindow(false);
	GetDlgItem(IDC_b)->EnableWindow(false);
	GetDlgItem(IDC_c)->EnableWindow(false);
	GetDlgItem(IDC_d)->EnableWindow(false);
	GetDlgItem(IDC_e)->EnableWindow(false);
	GetDlgItem(IDC_f)->EnableWindow(false);
// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::OnRadio8() 
{
	m_tip="已选择八进制！";
	UpdateData(false);
	datekind=8;
	GetDlgItem(IDC_2)->EnableWindow(true);
	GetDlgItem(IDC_3)->EnableWindow(true);
	GetDlgItem(IDC_4)->EnableWindow(true);
	GetDlgItem(IDC_5)->EnableWindow(true);
	GetDlgItem(IDC_6)->EnableWindow(true);
	GetDlgItem(IDC_7)->EnableWindow(true);
	GetDlgItem(IDC_8)->EnableWindow(false);
	GetDlgItem(IDC_9)->EnableWindow(false);



	GetDlgItem(IDC_a)->EnableWindow(false);
	GetDlgItem(IDC_b)->EnableWindow(false);
	GetDlgItem(IDC_c)->EnableWindow(false);
	GetDlgItem(IDC_d)->EnableWindow(false);
	GetDlgItem(IDC_e)->EnableWindow(false);
	GetDlgItem(IDC_f)->EnableWindow(false);// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::OnRadio16() 
{
	m_tip="已选择十六进制！";
	UpdateData(false);
	datekind=16;
	GetDlgItem(IDC_2)->EnableWindow(true);
	GetDlgItem(IDC_3)->EnableWindow(true);
	GetDlgItem(IDC_4)->EnableWindow(true);
	GetDlgItem(IDC_5)->EnableWindow(true);
	GetDlgItem(IDC_6)->EnableWindow(true);
	GetDlgItem(IDC_7)->EnableWindow(true);
	GetDlgItem(IDC_8)->EnableWindow(true);
	GetDlgItem(IDC_9)->EnableWindow(true);



	GetDlgItem(IDC_a)->EnableWindow(true);
	GetDlgItem(IDC_b)->EnableWindow(true);
	GetDlgItem(IDC_c)->EnableWindow(true);
	GetDlgItem(IDC_d)->EnableWindow(true);
	GetDlgItem(IDC_e)->EnableWindow(true);
	GetDlgItem(IDC_f)->EnableWindow(true);
// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::OnMenuitemguanyu() 
{
	CAboutDlg dd;
	dd.DoModal();
	// TODO: Add your command handler code here
	
}

void CJJJJDlg::Onjdu() 
{
	m_ps="已选择角度！";
    UpdateData(false);
	// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::Onhdu() 
{
	m_ps="已选择弧度！";// TODO: Add your control notification handler code here
	UpdateData(false);
}

void CJJJJDlg::Onback() 
{
	UpdateData();
	if (m_input.GetLength()>0)
	{
		m_input=m_input.Mid(0,m_input.GetLength()-1);
	}
    UpdateData(false);	
// TODO: Add your control notification handler code here
	
}

void CJJJJDlg::Oneq() 
{
	CString str;
	int tempi;
	newput=TRUE;
	UpdateData();
	num2str=m_input;
	if(datekind==10) num2=atof(m_input);
	else num2=strtod(m_input,datekind);
	char  datetemp[256];
/////////////////////////////////////////
	switch (method[10])
	{
	case '+':
		{
			num3=num1+num2;
			break;
		}
	case '-':
		{
			num3=num1-num2;
			break;
		}
	case '*':
		{
			num3=num1*num2;
			break;
		}
	case '/':
		{
			if (num2==0){MessageBox("除数不能为0!","计算出错");}
			else num3=num1/num2;
			break;
		}
	}
//////////////////////////////////////////////////
	switch (datekind)
	{
	case 2:
	tempi=(int)num3;
	itoa(tempi,datetemp,2);
	m_input.Format("%s",datetemp);
	break;
	case 8:
			tempi=(int)num3;
			itoa(tempi,datetemp,8);
			m_input.Format("%s",datetemp);
			break;
   	case 16:
			tempi=(int)num3;
			itoa(tempi,datetemp,16);
			m_input.Format("%s",datetemp);
			break;
   	default:break; 
	}
	UpdateData(false);
	method[10]='\0';
	num1=0;
	num2=0;
	num3=0;
	num1str=num2str=num3str="";
}

double CJJJJDlg::strtod(CString str, int kind)
{
	double doubleback=0;
	int j,i,length;
	j=length=str.GetLength();
	char switcchar[10];
	switch (kind)
	{
	case 2:		
		for( i=0;i<length;i++){
			doubleback=doubleback+atof(str.Mid(j-1,1))*pow(2.0,i);j--;}
		break;
	case 8:		
		for( i=0;i<length;i++){
			doubleback=doubleback+atof(str.Mid(j-1,1))*pow(8.0,i);j--;}
		break;
	case 16:		
		for( i=0;i<length;i++){
			strcpy(switcchar,(LPCTSTR)str);//str.Format("%c",switcchar[0]);MessageBox(str);
			switch(switcchar[0]){
			case 'A':doubleback=doubleback+10*pow(16.0,i);j--;
				break;
			case 'B':doubleback=doubleback+11*pow(16.0,i);j--;
				break;
			case 'C':doubleback=doubleback+12*pow(16.0,i);j--;
				break;
			case 'D':doubleback=doubleback+13*pow(16.0,i);j--;
				break;
			case 'E':doubleback=doubleback+14*pow(16.0,i);j--;
				break;
			case 'F':doubleback=doubleback+15*pow(16.0,i);j--;
				break;
			default:doubleback=doubleback+atof(str.Mid(j-1,1))*pow(16.0,i);j--;
				break;
			}

			}
			
		break;
	default:break;
	}
	return doubleback;

}
