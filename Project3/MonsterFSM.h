#pragma once

enum class MonsterState
{
	PROWL = 1, CHASE, ATTACK, DEATH,
};

class MonsterFSM
{
	MonsterState currentState;
	bool bIsFindEnemy = false;
	bool bIsClose = false;
	float HP = 100;

	void UpdateState(MonsterState curstate);
};

