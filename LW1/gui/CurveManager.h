#pragma once
#include "Curve.h"

const vector<string> FILENAMES =
{
	"files/f1.txt",
	"files/f2.txt",
	"files/f3.txt",
	"files/f4.txt",
	"files/f5.txt",
	"files/f6.txt"
};

const vector<Color> COLORS =
{
	Color::White,
	Color::Magenta,
	Color::Red,
	Color::Green,
	Color::Blue,
	Color::Yellow
};

class CurveManager
{
private:
	RenderWindow* m_window;
	vector<curve*> m_curves;

	vector<Color> m_color;
	vector<string> m_filenames;

public:
	CurveManager(
		RenderWindow*,
		vector<string> filenames,
		vector<Color> colors
	);

	~CurveManager();

	void draw() const;
};
