
// ViewerDlg.h : ��� ����
//

#pragma once

#include "opencv2\opencv.hpp"
#include "RawInfoDlg.h"
#include "ImgScalingDlg.h"
#include "RotationDlg.h"
#include <math.h>
#include "FilterDialog.h"
#include "AddNoiseDlg.h"
#include "CMeanFilterDlg.h"
#include "COrderStatisticsDlg.h"
#include "PSNRDlg.h"

using namespace cv;

unsigned char** MemAlloc2D(int nHeight, int nWidth, unsigned char nInitVal);
void MemFree2D(unsigned char** Mem, int nHeight);

// CViewerDlg ��ȭ ����
class CViewerDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CViewerDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_VIEWER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.

	enum ImageFormat
	{
		FORMAT_RGB,
		FORMAT_YUV444,
		FORMAT_YUV420,
		FORMAT_GRAY
	};

	enum InterpolationType
	{
		BILINEAR,
		BICUBIC
	};
	
	enum FilterTpye
	{
		FILTER_AVERAGE,
		FILTER_SMOOTH,
		FILTER_SHARPEN,
		FILTER_GAUSSIAN
	};

	enum NoiseFilterType
	{
		NF_ARITHMETIC,
		NF_GEOMETRIC,
		NF_HARMONIC,
		NF_CONTRAHARMONIC,
		NF_MEDIAN,
		NF_ADAPTIVEMEDIAN
	};
// �����Դϴ�.

private:
	unsigned char **ch_in_1, **ch_in_2, **ch_in_3;
	
	unsigned char **ch_in_gray;
	
	int* Hist;

	int nHeight_in, nWidth_in;
	int nFormat;
	bool isImageOpened;
	CString InpFileName;

public:
	CStatic m_PicOri;
	CStatic m_PicProc;

	////////��� DLG�� ���������� ��ȯ�Ϸ���..
	CRawInfoDlg RawInfoDlg;
	ImgScalingDlg ImgScalingDlg;
	CRotationDlg RotationDlg;

	Mat Ori_Img, Proc_Img;
	CRect rect;
	CDC* m_pDC;

	//display
	void DisplayImage(Mat DispMat, bool bInOut);
	void DisplayBitmap(CDC *pDC, CRect rect, IplImage* DisplplImage);
	void ResizeImage(IplImage* src, IplImage** dst, CRect* rect);
	

protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnConvertgrayBtnClick();
	afx_msg void OnFileOpenMenuClick();
	afx_msg void OnCloseMenuClick();
	afx_msg void OnEditScalingClick();
	afx_msg void OnEditRotationClick();
	afx_msg void OnHistogramGetClick();
	afx_msg void OnHistogramEqualizationClicked();
	afx_msg void OnHistogramMatchingClicked();
	afx_msg void OnEditFilterClicked();
	afx_msg void OnNoisereductionAddnoiseClicked();

	unsigned char** Padding(unsigned char** In, int nHeight, int nWidth, int nFilterSize);
	void AverageFilter(unsigned char** In_Pad, unsigned char** Out, int nHeight, int nWidth, int nFilterSize);
	void SmoothFilter(unsigned char** In_Pad, unsigned char** Out, int nHeight, int nWidth);
	void SharpenFilter(unsigned char** In_Pad, unsigned char** Out, int nHeight, int nWidth);
	void GaussianFilter(unsigned char** In_Pad, unsigned char** Out, int nHeight, int nWidth);

	void ArithmeticMeanFilter(unsigned char** Img_in, unsigned char** Out, int nHeight, int nWidth, int nFilterSize);
	void GeometricMeanFilter(unsigned char** Img_in, unsigned char** Out, int nHeight, int nWidth, int nFilterSize);
	void HarmonicMeanFilter(unsigned char** Img_in, unsigned char** Out, int nHeight, int nWidth, int nFilterSize);
	void ContraharmonicMeanFilter(unsigned char** Img_in, unsigned char** Out, int nHeight, int nWidth, int nFilterSize, int Q);

	void MedianFilter(unsigned char **Img_in, unsigned char **Out, int nHeight, int nWidth, int nFilterSize);
	void AdaptiveMedianFilter(unsigned char **Img_in, unsigned char **Out, int nHeight, int nWidth, int nFilterSize, int nFilterSize_Max);


	afx_msg void OnNoisefilteringMeanfilter();
	afx_msg void OnNoisefilteringOrderStatisticClicked();
	afx_msg void OnGetpsnr();
};

//interpolation
bool isInsideBoundary(int nHeight, int nWidth, double h, double w);
unsigned char BilinearInterpolation(unsigned char** In, int nHeight_Ori, int nWidth_Ori, double h_Cvt, double w_Cvt);
unsigned char BicubicInterpolation(unsigned char** In, int nHeight_Ori, int nWidth_Ori, double h_Cvt, double w_Cvt);

void DisplayHistogram(int *Hist);

void InputGaussianNoise(unsigned char** In, unsigned char** Out, int nHeight, int nWidth, float fMean, float fStdev);
void InputSaltPepperNoise(unsigned char** In, unsigned char** Out, int nHeight, int nWidth, float fSProb, float fPProb);
void GetGaussianPDF(float* EmptyPDF, int nLength, float fMean, float fStDev);
float GetNoise(float* PDF, int nLength);

Mat GrayToMat(unsigned char** Img, int nHeight, int nWidth);





