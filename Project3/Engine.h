#pragma once

#include <vector>
#include "AActor.h"

using namespace std;
class Engine
{
	bool bIsRunning = false;

public:
	vector<AActor*> Actors;

	Engine();
	virtual ~Engine();
	void Run(); 
	void SpawnActor(AActor* newactor);

protected:
	void Input();
	void Tick();
	void Render();
};

