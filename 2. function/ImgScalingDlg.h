#pragma once


// ImgScalingDlg ��ȭ �����Դϴ�.

class ImgScalingDlg : public CDialogEx
{
	DECLARE_DYNAMIC(ImgScalingDlg)

public:
	ImgScalingDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~ImgScalingDlg();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IMGSCALEDIALOG };
#endif
private:
	CStatic m_EditScaleRate;

	double dScaleRate;
	int nInterpolationType;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	int m_radio_Interp;

	afx_msg void OnOkbutton2Clicked();
	afx_msg void OnRadioClicked(UINT msg);

	double GetScaleRate();
	int GetInterpType();
	
};
