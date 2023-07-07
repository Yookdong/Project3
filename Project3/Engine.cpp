#include "Engine.h"
#include <conio.h>
#include "FPlayer.h"
#include "FMonster.h"

Engine* Engine::EngineInstance = nullptr; // 헤더에다 하면 오류나옴 중복 선언으로

Engine::Engine()
{
	EngineInstance = this;
}

Engine::~Engine()
{
	for (auto current : Actors)
	{
		delete current;
	}

	Actors.clear(); // 마지막으로 배열을 비우는 것

}

void Engine::Run()
{
	while (bIsRunning)
	{
		Input();
		Tick();
		Render();
	}
}

void Engine::SpawnActor(AActor* newactor)
{
	Actors.push_back(newactor);
}

void Engine::Input()
{
	// 언리얼의 경우 엔진이 입력을 받아서 액터로 넘겨 준다.
	// 모든 엔진이 위와 같은 방법을 사용하나 유니티의 경우 오브젝트가 바로 받는다.
	KeyCode = _getch();
}

void Engine::Tick()
{
	for (int i = 0; i < Actors.size(); i++)
	{
		//APlayer* player = dynamic_cast<APlayer*>(Actors.at(i));
		//if (player != nullptr)
		//{
		//	player->X++;
		//}

		//AMonster* monster = dynamic_cast<AMonster*>(Actors.at(i));
		//if (monster != nullptr)
		//{
		//	monster->Y++;
		//}

		Actors.at(i)->Tick();
	}
}

void Engine::Render()
{
	system("cls");

	for (int i = 0; i < Actors.size(); i++)
	{
		Actors.at(i)->Render();
	}
}
