#pragma once

#include <vector>
#include "AActor.h"

using namespace std;
class Engine
{

public:
	vector<AActor*> Actors;

	Engine();
	virtual ~Engine();
	void Run(); 
	void SpawnActor(AActor* newactor);

	static Engine* EngineInstance;

	inline int GetKeyCode() { return KeyCode; }
	int SetKeyCode(int value) { KeyCode = value; }

protected:
	bool bIsRunning = true;
	int KeyCode;

	void Input();
	void Tick();
	void Render();

};

#define GEngine Engine::EngineInstance