#pragma once

#include "AActor.h"

class FWall : AActor
{
private:
	int X;
	int Y;
	char Shape;

public:
	FWall();
	virtual ~FWall();

	void Render();
};

