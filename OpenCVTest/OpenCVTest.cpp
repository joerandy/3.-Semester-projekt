// OpenCVTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/cvstd.hpp>
#include <opencv2/videoio.hpp>

using namespace std;
using namespace cv;
int main()
{
	//KAN VI SÅ ÆNDRE NOGET UDEN ALTING BLIR AIDS
	// hejrallemuller
	// og chruss
	//Read the image file
		Mat image = imread("C:/Users/Rasmu/OneDrive/Desktop/proxy.duckduckgo.com.jpg");
		VideoCapture cap(0); // open the default camera
		if (!cap.isOpened())  // check if we succeeded
			return -1;

		Mat edges;
		namedWindow("edges", 1);
		for (;;)
		{
			Mat frame;
			cap >> frame; // get a new frame from camera
			cvtColor(frame, edges, CV_BGR2GRAY);
			GaussianBlur(edges, edges, Size(7, 7), 1.5, 1.5);
			Canny(edges, edges, 0, 30, 3);
			imshow("edges", edges);
			if (waitKey(30) >= 0) break;
		}
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
	// ALTSÅ HVAD SKER DER MED DE FUGGING CONFLICTS MAND
	return 0;
}
