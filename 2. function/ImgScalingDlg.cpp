// ImgScalingDlg.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Viewer.h"
#include "ImgScalingDlg.h"
#include "afxdialogex.h"


// ImgScalingDlg ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(ImgScalingDlg, CDialogEx)

ImgScalingDlg::ImgScalingDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_IMGSCALEDIALOG, pParent)
	, m_radio_Interp(0)
{

}

ImgScalingDlg::~ImgScalingDlg()
{
}

void ImgScalingDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_SCALERATE, m_EditScaleRate);
	DDX_Radio(pDX, IDC_RADIO_BILINEAR_S, m_radio_Interp);
}


BEGIN_MESSAGE_MAP(ImgScalingDlg, CDialogEx)
	ON_BN_CLICKED(IDC_OKBUTTON2, &ImgScalingDlg::OnOkbutton2Clicked)
	ON_CONTROL_RANGE(BN_CLICKED, IDC_RADIO_BILINEAR_S, IDC_RADIO_BICUBIC_S, OnRadioClicked)
END_MESSAGE_MAP()


// ImgScalingDlg �޽��� ó�����Դϴ�.


void ImgScalingDlg::OnOkbutton2Clicked()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CString cstrTemp;

	m_EditScaleRate.GetWindowTextA(cstrTemp);

	dScaleRate = atof(cstrTemp);

	CDialog::OnOK();
}

void ImgScalingDlg::OnRadioClicked(UINT msg)
{
	UpdateData(TRUE);
	switch (m_radio_Interp)
	{
	case 0:
		nInterpolationType = 0;
		break;
	case 1:
		nInterpolationType = 1;
		break;
	}
}

double ImgScalingDlg::GetScaleRate() { return dScaleRate; }
int ImgScalingDlg::GetInterpType() { return nInterpolationType; }



