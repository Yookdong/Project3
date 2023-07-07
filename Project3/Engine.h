#pragma once

#include <vector>

using namespace std;
class Engine
{
private:
	//Actor acotor;

public:
	Engine();
	virtual ~Engine();

	void Input();
	void Tick();
	void Render();
};

