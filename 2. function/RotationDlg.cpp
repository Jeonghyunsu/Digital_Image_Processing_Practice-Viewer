// RotationDlg.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Viewer.h"
#include "RotationDlg.h"
#include "afxdialogex.h"


// CRotationDlg ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CRotationDlg, CDialogEx)

CRotationDlg::CRotationDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_IMGROTATIONDLG, pParent)
	, m_radio_interp(0)
{

}

CRotationDlg::~CRotationDlg()
{
}

void CRotationDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Radio(pDX, IDC_RADIO_BILINEAR_R, m_radio_interp);
	DDX_Control(pDX, IDC_EDIT_ROTATEANGLE, m_EditRotateAngle);
}


BEGIN_MESSAGE_MAP(CRotationDlg, CDialogEx)
	ON_BN_CLICKED(IDC_OKBUTTON3, &CRotationDlg::OnClickedOkbutton3)
	ON_CONTROL_RANGE(BN_CLICKED, IDC_RADIO_BILINEAR_R, IDC_RADIO_BICUBIC_R, OnRadioClicked)
END_MESSAGE_MAP()


// CRotationDlg �޽��� ó�����Դϴ�.


void CRotationDlg::OnClickedOkbutton3()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CString cstrAngle;
	m_EditRotateAngle.GetWindowTextA(cstrAngle);
	nAngle = atoi(cstrAngle);
	CDialog::OnOK();
}
void CRotationDlg::OnRadioClicked(UINT msg)
{
	UpdateData(TRUE);
	switch (m_radio_interp)
	{
	case 0:
		nInterpolationType = 0;
		break;
	case 1:
		nInterpolationType = 1;
		break;
	}
}

int CRotationDlg::GetAngle() { return nAngle; }
int CRotationDlg::GetInterpolationType() { return nInterpolationType; }
