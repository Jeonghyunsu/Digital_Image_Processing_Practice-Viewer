#pragma once


// AddNoiseTab_1 ��ȭ �����Դϴ�.

class AddNoiseTab_1 : public CDialogEx
{
	DECLARE_DYNAMIC(AddNoiseTab_1)

public:
	AddNoiseTab_1(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~AddNoiseTab_1();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADDNOISE_TAB1 };
#endif
//private:
public:
	CEdit Edit_GN_Mean;
	CEdit Edit_GN_Stdev;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
