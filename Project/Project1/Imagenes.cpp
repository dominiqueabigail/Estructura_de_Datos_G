#include "Imagenes.h"


Imagenes::Imagenes(const std::string src, const int type_process)
	: imagen(cv::imread(src)), tipoProceso(type_process)
{
}

void Imagenes::showAscii(int x, int y)
{
	Imagenes::intensity(x, y);
}

void Imagenes::consoleFont(int x, int y) noexcept
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = x;
	cfi.dwFontSize.Y = y;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy_s(cfi.FaceName, L"Consolas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}

void Imagenes::grayColor() noexcept
{
	cv::Mat _grey_image;
	cv::cvtColor(imagen, _grey_image, cv::COLOR_BGR2GRAY);
	imagen = _grey_image;
}

inline void Imagenes::intensity(int x, int y)
{
	Utilidades util;
	int cordX, cordY;
	cordX = x;
	cordY = y;
	double unit = (256.0 + 1) / 68.0;
	int cn = imagen.channels();
	std::string str;
	uint8_t* pixelPtr = (uint8_t*)imagen.data;
	cv::Scalar_<uint8_t> bgrPixel;
	for (int i = 0; i < imagen.rows; i++)
	{
		util.gotoxy(cordX, cordY);
		for (int j = 0; j < imagen.cols; j++)
		{
			int R = pixelPtr[i * imagen.cols * cn + j * cn + 2];
			int G = pixelPtr[i * imagen.cols * cn + j * cn + 1];
			int B = pixelPtr[i * imagen.cols * cn + j * cn + 0];
			int grayScaleValue = (B * 0.0722) + // B
				(G * 0.7152) + // G
				(R * 0.2126);	// R
			int intensity = grayScaleValue / unit;
			str = charAscii(intensity);
			ascii += str;
			printf("\033[%d;2;%d;%d;%dm%c\033[0;00m", tipoProceso, R, G, B, str[0]);
		}
		ascii += "\n";
		std::cout << std::endl;
		cordY++;
	}
}

void Imagenes::resize(int x, int y) noexcept
{
	try {
		cv::Mat resizeImage;
		cv::resize(imagen, resizeImage, cv::Size(x, y));
		imagen = resizeImage;
	}
	catch (...) {
		std::cout << "!";
	}

}

void Imagenes::generateFile(std::string name) noexcept
{
	std::ofstream file;
	file.open(name);
	if (file.is_open())
		file << ascii;
	file.close();
}


std::string Imagenes::charAscii(int intensity) noexcept
{
	std::vector<std::string> map{
		"$", "@", "B", "%", "8", "&", "W", "M", "#", "*", "o", "a", "h", "k", "b", "d", "p", "q", "w", "m", "Z",
		"O", "0", "Q", "L", "C", "J", "U", "Y", "X", "z", "c", "v", "u", "n", "x", "r", "j", "f", "t", "/", "\\",
		"|", "(", ")", "1", "{", "}", "[", "]", "?", "-", "_", "+", "~", "<", ">", "i", "!", "l",
		"I", ";", ":", "\"", "^", "`", "'", "." };
	return map[intensity];
}

void Imagenes::graficarPixelado(int x, int y) {
	Imagenes ascii(c[1], 48);
	//ascii.consoleFont(16, 30);
	ascii.consoleFont(8, 15);
	try {
		//ancho-largo
		ascii.resize(60, 40);
		//ascii.resize(120, 70); //redimensiona la imagen. para las cartas es 7-6 //ascii.resize(7, 6);
	}
	catch (...) {
		std::cout << "Hola!";
	}
	//system("cls");
	//u.gotoxy(20, 1);
	ascii.showAscii(x, y);
	system("pause");
	system("cls");
	//ascii.consoleFont(7, 15);
}

void Imagenes::graficarHD() {
	// Read the image file as
	// imread("default.jpg");
	Mat image = imread(c[2],
		IMREAD_COLOR);

	// Error Handling
	if (image.empty()) {
		cout << "Image File "
			<< "Not Found" << endl;

		// wait for any key press
		cin.get();
		return;
	}

	// Show Image inside a window with
	// the name provided
	imshow("Window Name", image);

	// Wait for any keystroke
	waitKey(0);
	destroyWindow("Window Name");
}