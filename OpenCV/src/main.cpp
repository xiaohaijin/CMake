#include <iostream>
#include "opencv2/opencv.hpp"

int main(int argc, char *argv[])
{
  if(argc < 2){
    std::cout << "Usage: " << argv[0] << " image" << std::endl;
    return -1;
  }

  cv::Mat image = cv::imread(argv[1]);
  cv::namedWindow("windowName");

  cv::imshow("windowName", image);
  cv::waitKey(0);
  return 0;
}

