#pragma once
class AActor
{
private:
	int X;
	int Y;
	char Shape;

public:
	AActor();
	virtual ~AActor();

	void Render();
	void Tick();
	void Input();
};

