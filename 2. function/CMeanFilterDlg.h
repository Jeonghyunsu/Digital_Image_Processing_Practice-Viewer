#pragma once


// CMeanfilterDlg 대화 상자입니다.

class CMeanfilterDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CMeanfilterDlg)
public:
	CMeanfilterDlg(CWnd* pParent = NULL);   // 표준 생성자입니다.
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
// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MEANFILTERDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonOkMf(); 
//	afx_msg void OnRadioClicked(UINT msg);
};

