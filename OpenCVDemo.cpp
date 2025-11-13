#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::VideoCapture cap(0); 
    if (!cap.isOpened()) {
        std::cerr << "Error: Cannot open camera" << std::endl;
        return -1;
    }

    cv::Mat frame;
    while (true) {
        cap >> frame;
        if (frame.empty()) break;
        cv::imshow("Camera", frame);

        if (cv::waitKey(10) == 27) break;
    }

    return 0;
}
