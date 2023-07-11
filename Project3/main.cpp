#include <iostream>
#include "Engine.h"
#include "FPlayer.h"
#include "FMonster.h"

using namespace std;

int main()
{
	Engine* MyEngine = new Engine;

	// load
	MyEngine->SpawnActor(new APlayer);
	MyEngine->SpawnActor(new AMonster);
	// 

	MyEngine->Run();

	delete MyEngine; // 포인터를 사용하는 이유
	// 내가 만들고 싶을 때 만들고 내가 지우고 싶을 때 지우기 위해


	return 0;
}