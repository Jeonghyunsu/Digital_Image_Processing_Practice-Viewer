// FilterDialog.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "Viewer.h"
#include "FilterDialog.h"
#include "afxdialogex.h"


// CFilterDialog 대화 상자입니다.

IMPLEMENT_DYNAMIC(CFilterDialog, CDialogEx)

CFilterDialog::CFilterDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_FILTERDIALOG, pParent)
	, m_radio_FilterType(0)
{

}

CFilterDialog::~CFilterDialog()
{
}

void CFilterDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Radio(pDX, IDC_RADIO_AVERAGE, m_radio_FilterType);
	DDX_Control(pDX, IDC_EDIT_FILTERSIZE, m_EditFilterSize);
}


BEGIN_MESSAGE_MAP(CFilterDialog, CDialogEx)
	ON_BN_CLICKED(IDC_OKBUTTON, &CFilterDialog::OnOkbuttonClicked)
	ON_BN_CLICKED(IDC_CANCELBUTTON, &CFilterDialog::OnCancelbuttonClicked)
	ON_CONTROL_RANGE(BN_CLICKED, IDC_RADIO_AVERAGE, IDC_RADIO_GAUSSIAN, OnClickedRadio)
END_MESSAGE_MAP()


// CFilterDialog 메시지 처리기입니다.

void CFilterDialog::OnOkbuttonClicked()
{
	CString cstrTemp;
	m_EditFilterSize.GetWindowTextA(cstrTemp);
	nFilterSize = atoi(cstrTemp);

	CDialog::OnOK();
}

void CFilterDialog::OnCancelbuttonClicked()
{
	CDialog::OnCancel();
}


void CFilterDialog::OnClickedRadio(UINT msg)
{
	UpdateData(TRUE);
	switch (m_radio_FilterType)
	{
	case 0:
		nFilterType = 0;
		break;
	case 1:
		nFilterType = 1;
		break;
	case 2:
		nFilterType = 2;
		break;
	case 3:
		nFilterType = 3;
		break;
	}
}
int CFilterDialog::getFilterSize() { return nFilterSize; }
int CFilterDialog::getFilterType() { return nFilterType; }