
#include "stdafx.h"
#include "Viewer.h"
#include "COrderstatisticsDlg.h"
#include "afxdialogex.h"


// COrderstatisticsDlg ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(COrderstatisticsDlg, CDialogEx)

COrderstatisticsDlg::COrderstatisticsDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ORDERSTATISTICSDIALOG, pParent)
	, m_radio_osf(4)
{

}

COrderstatisticsDlg::~COrderstatisticsDlg()
{
}

void COrderstatisticsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Radio(pDX, IDC_RADIO_MEDIANF, m_radio_osf);
	DDX_Control(pDX, IDC_EDIT_FILTERSIZE_OSF, Edit_FilterSize1);
	DDX_Control(pDX, IDC_EDIT_MAXFILTERSIZE_OSF, Edit_FilterSize2);
}

BEGIN_MESSAGE_MAP(COrderstatisticsDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_OK_OSF, &COrderstatisticsDlg::OnOkOsfButtonClicked)
	ON_CONTROL_RANGE(BN_CLICKED, IDC_RADIO_MEDIANF, IDC_RADIO_APAPTIVEMEDIANF, OnRadioClicked)

END_MESSAGE_MAP()


// COrderstatisticsDlg �޽��� ó�����Դϴ�.


// OrderStatisticsDlg �޽��� ó�����Դϴ�.

void COrderstatisticsDlg::OnOkOsfButtonClicked()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CString strTemp1, strTemp2;

	Edit_FilterSize1.GetWindowTextA(strTemp1);
	Edit_FilterSize2.GetWindowTextA(strTemp2);

	nFilterSize1 = atoi(strTemp1);
	nFilterSize2 = atoi(strTemp2);

	CDialogEx::OnOK();
}


void COrderstatisticsDlg::OnRadioClicked(UINT msg)
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.

	UpdateData(TRUE);
	switch (m_radio_osf)
	{
	case 0:

		nOSFType = 4;
		break;

	case 1:

		nOSFType = 5;
		break;
	}
	if (m_radio_osf == 0)	MessageBox("median");
	else if (m_radio_osf == 1)MessageBox("adpative");
}

int COrderstatisticsDlg::GetFilterSize1() { return nFilterSize1; }
int COrderstatisticsDlg::GetFilterSize2() { return nFilterSize2; }
int COrderstatisticsDlg::GetOSFType() { return nOSFType; }
// OrderstatisticsDlg.cpp : ���� �����Դϴ�.
//
