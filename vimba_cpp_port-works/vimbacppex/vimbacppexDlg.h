
// vimbacppexDlg.h : header file
//

#pragma once

#include "ApiController.h"

// CvimbacppexDlg dialog
class CvimbacppexDlg : public CDialog
{
// Construction
 public:

	AVT::VmbAPI::Examples::ApiController apiController;

	CvimbacppexDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_VIMBACPPEX_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonVimbaVersion();
};
