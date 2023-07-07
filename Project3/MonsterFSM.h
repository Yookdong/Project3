#pragma once

enum class MonsterState
{
	IDLE, PROWL, CHASE, ATTACK, DEATH,
};

class MonsterFSM
{
	MonsterState currentState = MonsterState::IDLE;
	bool bIsFindEnemy = false;
	bool bIsClose = false;
	float HP = 100;

public:
	MonsterFSM();
	~MonsterFSM();

	void UpdateState(MonsterState curstate);
};

