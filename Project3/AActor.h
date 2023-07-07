#pragma once
class AActor
{
public:
	int X;
	int Y;
	char Shape;

	AActor();
	virtual ~AActor();

	void Render();
	void Tick();
	void Input();
};

