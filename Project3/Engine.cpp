#include "Engine.h"

Engine::Engine()
{
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
}

void Engine::Tick()
{
	for (int i = 0; i < Actors.size(); i++)
	{
		Actors.at(i)->Tick();
	}
}

void Engine::Render()
{
	for (int i = 0; i < Actors.size(); i++)
	{
		Actors.at(i)->Render();
	}
}
