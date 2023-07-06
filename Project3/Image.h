#pragma once

struct Position
{
	int X;
	int Y;

public:
	Position(): X(0),Y(0) {}
	Position(int x, int y): X(x), Y(y) {}
};

struct Color
{
	int R;
	int G;
	int B;

public:
	Color() :R(0), G(0), B(0) {}
	Color(int r, int g, int b) : R(r), G(g), B(b) {}
};

class Image
{
private:
	Position pos;
	Color color;

public:
	Image() {};
	Image(int n1, int n2, int n3, int n4, int n5) : pos(n1, n2), color(n3, n4, n5) {}
	Image(Position p, Color c) : pos(p), color(c) {}

	Color GetColor() { return color; }
	Position GetPos() { return pos; }
};

