#pragma once

#include <string>
#include <vector>
#include <Windows.h>
#include <cwchar>
#include <fstream>
//#include <graphics.h>
//OPEN CV
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "Utilidades.h"


using namespace cv;
using namespace std;

class Imagenes
{
private:
	cv::Mat imagen{ 0 };
	int tipoProceso{ 0 };
	std::string ascii;
	Utilidades u;
	string c[5] = { "img\\Yue_chibi.png" , "img\\Yue_chibi.jpg", "img\\a2.jpg" };
	Mat image{ 0 };

public:
	Imagenes() {};
	Imagenes(const std::string, const int);
	void showAscii(int x, int y);
	void consoleFont(int, int) noexcept;
	void grayColor() noexcept;
	std::string charAscii(int) noexcept;
	inline void intensity(int x, int y);
	void resize(int, int) noexcept;
	void generateFile(std::string) noexcept;
	void graficarPixelado(int, int);
	void graficarHD();
};
