#pragma once


// CFilterDialog ��ȭ �����Դϴ�.

class CFilterDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CFilterDialog)

public:
	CFilterDialog(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CFilterDialog();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FILTERDIALOG };
#endif
private:
	CStatic m_EditFilterSize;

	int nFilterSize;
	int nFilterType;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	DECLARE_MESSAGE_MAP()

public:
	int m_radio_FilterType;
	afx_msg void OnOkbuttonClicked();
	afx_msg void OnCancelbuttonClicked();
	afx_msg void OnClickedRadio(UINT msg);

	int getFilterSize();
	int getFilterType();
};
