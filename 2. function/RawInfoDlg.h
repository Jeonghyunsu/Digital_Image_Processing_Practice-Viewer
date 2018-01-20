#pragma once


// CRawInfoDlg ��ȭ �����Դϴ�.

class CRawInfoDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CRawInfoDlg)

public:
	CRawInfoDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CRawInfoDlg();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RAWINFODIALOG };
#endif
private:
	int nHeight;
	int nWidth;
	int nFormat;

	CEdit m_EditHeight;
	CEdit m_EditWidth;

public:
	bool isTrue;
	int GetRawHeight()
	{
		return nHeight;
	}
	int GetRawWidth()
	{
		return nWidth;
	}
	int GetRawFormat()
	{
		return nFormat;
	}
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	int m_radio_rawFileInfo;
	afx_msg void OnClickedRadio(UINT msg);
	afx_msg void OnBnClickedOKButton1();
	afx_msg void OnBnClickedCancelButton1();
};
