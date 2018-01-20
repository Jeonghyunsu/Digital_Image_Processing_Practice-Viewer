#pragma once
#include "RawInfoDlg.h"
#include "ViewerDlg.h"

// CPSNRDlg 대화 상자입니다.

class CPSNRDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CPSNRDlg)

private:
	unsigned char** Ori, **Dst;
	int nHeight_Ori, nWidth_Ori;
	int nHeight_Dst, nWidth_Dst;

	CEdit Edit_File_Ori, Edit_File_Dst, Edit_PSNR;
	double GetPSNR(unsigned char** Ori, unsigned char** Dst, int Height, int nWidth);


public:
	CPSNRDlg(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CPSNRDlg();


// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PSNRDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnNoiseopenButtonClicked();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedCancel();
};
