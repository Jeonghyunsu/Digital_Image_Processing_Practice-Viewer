// AddNoiseTab_1.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Viewer.h"
#include "AddNoiseTab_1.h"
#include "afxdialogex.h"


// AddNoiseTab_1 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(AddNoiseTab_1, CDialogEx)

AddNoiseTab_1::AddNoiseTab_1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADDNOISE_TAB1, pParent)
{

}

AddNoiseTab_1::~AddNoiseTab_1()
{
}

void AddNoiseTab_1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, ID_EDIT_GNNEAN, Edit_GN_Mean);
	DDX_Control(pDX, ID_EDIT_GNSTEV, Edit_GN_Stdev);
}


BEGIN_MESSAGE_MAP(AddNoiseTab_1, CDialogEx)
END_MESSAGE_MAP()


// AddNoiseTab_1 �޽��� ó�����Դϴ�.
