#ifndef EDGEDETECTOR_OPENCV_PROCESSOR_H
#define EDGEDETECTOR_OPENCV_PROCESSOR_H

#include <opencv2/opencv.hpp>

class OpenCVProcessor {
public:
    static cv::Mat applyCannyEdgeDetection(const cv::Mat& input, double threshold1 = 50, double threshold2 = 150);
    static cv::Mat convertToGrayscale(const cv::Mat& input);
    static cv::Mat applyGaussianBlur(const cv::Mat& input, int kernelSize = 5);
};

#endif