#pragma once


// CMeanfilterDlg ��ȭ �����Դϴ�.

class CMeanfilterDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CMeanfilterDlg)
public:
	CMeanfilterDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CMeanfilterDlg();


private:
	int nFilterSize;
	int nMeanFilterType;
	int Q;

	CEdit Edit_FilterSize;
	CEdit Edit_Q;


public:
	int m_radio_mf;


	afx_msg void OnOkMfButtonClicked();
	afx_msg void OnRadioClicked(UINT);

	int GetFilterSize();
	int GetMeanFilterType();
	int GetQ();
// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MEANFILTERDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonOkMf(); 
//	afx_msg void OnRadioClicked(UINT msg);
};

