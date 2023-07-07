#include "Engine.h"
#include <conio.h>
#include "FPlayer.h"
#include "FMonster.h"

Engine* Engine::EngineInstance = nullptr; // ������� �ϸ� �������� �ߺ� ��������

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

	Actors.clear(); // ���������� �迭�� ���� ��

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
	// �𸮾��� ��� ������ �Է��� �޾Ƽ� ���ͷ� �Ѱ� �ش�.
	// ��� ������ ���� ���� ����� ����ϳ� ����Ƽ�� ��� ������Ʈ�� �ٷ� �޴´�.
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
