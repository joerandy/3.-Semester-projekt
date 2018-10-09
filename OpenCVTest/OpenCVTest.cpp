// OpenCVTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/cvstd.hpp>

using namespace std;
using namespace cv;
int main()
{
	// hej rallemuller
	// Read the image file
		Mat image = imread("C:/Users/Rasmu/OneDrive/Desktop/proxy.duckduckgo.com.jpg");

	// Check for failure
	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get(); //wait for any key press
		return -1;

	}

	String windowName = "The Guitar"; //Name of the

	imshow(windowName, image); // Show our image inside the created window.

	waitKey(0); // Wait for any keystroke in the window

	destroyWindow(windowName); //destroy the created window

	return 0;
}
