#pragma once


// AddNoiseTab_2 ��ȭ �����Դϴ�.

class AddNoiseTab_2 : public CDialogEx
{
	DECLARE_DYNAMIC(AddNoiseTab_2)

public:
	AddNoiseTab_2(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~AddNoiseTab_2();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADDNOISE_TAB2 };
#endif
//private:
public:
	CEdit Edit_SN_Prob;
	CEdit Edit_PN_Prob;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
