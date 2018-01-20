#pragma once


// COrderstatisticsDlg ��ȭ �����Դϴ�.

class COrderstatisticsDlg : public CDialogEx
{
	DECLARE_DYNAMIC(COrderstatisticsDlg)

public:
	COrderstatisticsDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~COrderstatisticsDlg();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ORDERSTATISTICSDIALOG };
#endif
private:
	int m_radio_osf;
	int nFilterSize1;
	int nFilterSize2;
	int nOSFType;

	CEdit Edit_FilterSize1;
	CEdit Edit_FilterSize2;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	int GetFilterSize1();
	int GetFilterSize2();
	int GetOSFType();

	afx_msg void OnOkOsfButtonClicked();
	afx_msg void OnRadioClicked(UINT msg);


};
