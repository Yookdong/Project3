#include "AActor.h"
#include <iostream>
#include <Windows.h>

using namespace std;

AActor::AActor()
{
}

AActor::~AActor()
{
}

void AActor::Render()
{
	COORD CPos;
	CPos.X = X;
	CPos.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CPos);

	cout << Shape;
}

void AActor::Tick()
{
}

void AActor::Input()
{
}
