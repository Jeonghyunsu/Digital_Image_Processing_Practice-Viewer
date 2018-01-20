# Digital_Image_Processing_Practice-Viewer

[Practice of Deepening of Digital Image Processing]

 I created the viewer by organizing things I learned during one semester.
 
 [1. Viewer]
 
 - void CViewerDlg::ResizeImage(IplImage* src, IplImage** dst, CRect * rect)
  
    : Resize input image through opencv's mat class
 
 - void CViewerDlg::DisplayImage(Mat DispMat, bool bInOut)
    
    * void CViewerDlg::DisplayBitmap(CDC * pDC, CRect rect, IplImage * DispIplImage)
    
       : Display on screen using DisplayBitmap method
 
 - void CViewerDlg::OnConvertgrayBtnClick()
 
    : Convert to gray Image(FORMAT_GRAY, FORMAT_YUV444, FORMAT_YUV420, FORMAT_RGB)
   
 - void CViewerDlg::OnEditScalingClick()
 
 
   - unsigned char BilinearInterpolation(unsigned char** In, int nHeight_Ori, int nWidth_Ori, double h_Cvt, double w_Cvt)

   - unsigned char BicubicInterpolation(unsigned char** In, int nHeight_Ori, int nWidth_Ori, double h_Cvt, double w_Cvt)
 
      :  Apply interpolation to gray image
 
 - void CViewerDlg::OnEditRotationClick()
 
 - unsigned char BilinearInterpolation(unsigned char** In, int nHeight_Ori, int nWidth_Ori, double h_Cvt, double w_Cvt)

   - unsigned char BicubicInterpolation(unsigned char** In, int nHeight_Ori, int nWidth_Ori, double h_Cvt, double w_Cvt)
 
      :  Apply rotation to gray image
      
 
 - void DisplayHistogram(int *Hist)

   - void CViewerDlg::OnHistogramGetClick()
    
      : Graph showing the frequency of occurrence of pixel value of whole image
 
    - void CViewerDlg::OnHistogramEqualizationClicked()
  
      : Using the histogram, the intensity of the image is uniformly distributed throughout, Effects that improve contrast, Using the cumulative distribution function (CDF), the histogram is extended to the left and right

- void CViewerDlg::OnEditFilterClicked() : Apply each filter

    - void CViewerDlg::AverageFilter(unsigned char** In_Pad, unsigned char** Out, int nHeight, int nWidth, int nFilterSize)

    - void CViewerDlg::SmoothFilter(unsigned char** In_Pad, unsigned char** Out, int nHeight, int nWidth)

    - void CViewerDlg::SharpenFilter(unsigned char** In_Pad, unsigned char** Out, int nHeight, int nWidth)

    - void CViewerDlg::GaussianFilter(unsigned char** In_Pad, unsigned char** Out, int nHeight, int nWidth)


- void CViewerDlg::OnNoisereductionAddnoiseClicked()

  * Add Noise
    - void InputGaussianNoise(unsigned char** In, unsigned char** Out, int nHeight, int nWidth, float fMean, float fStdev)
    - void InputSaltPepperNoise(unsigned char** In, unsigned char** Out, int nHeight, int nWidth, float fSProb, float fPProb)

  * Noise Reduction
    - void CViewerDlg::OnNoisefilteringMeanfilter()
    - void CViewerDlg::ArithmeticMeanFilter(unsigned char** Img_in, unsigned char** Out, int nHeight, int nWidth, int nFilterSize)
    - void CViewerDlg::GeometricMeanFilter(unsigned char** Img_in, unsigned char** Out, int nHeight, int nWidth, int nFilterSize)
    - void CViewerDlg::HarmonicMeanFilter(unsigned char** Img_in, unsigned char** Out, int nHeight, int nWidth, int nFilterSize
    - void CViewerDlg::AdaptiveMedianFilter(unsigned char **Img_in, unsigned char **Out, int nHeight, int nWidth, int nFilterSize, int nFilterSize_Max)
    - void CViewerDlg::OnNoisefilteringOrderStatisticClicked()

- void CViewerDlg::OnGetpsnr() : Output psnr through comparison of two images.

[2. function]

It contains detailed methods for the functions provided by the viewer.

