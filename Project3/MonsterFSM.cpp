#include "MonsterFSM.h"

MonsterFSM::MonsterFSM()
{
}

MonsterFSM::~MonsterFSM()
{
}

void MonsterFSM::UpdateState(MonsterState curstate)
{
	switch (curstate)
	{
	case MonsterState::PROWL:
		if (bIsFindEnemy)
			currentState = MonsterState::CHASE;
		break;
	case MonsterState::CHASE:
		if (bIsFindEnemy && !bIsClose)
			currentState = MonsterState::PROWL;
		else if (bIsFindEnemy && bIsClose)
			currentState = MonsterState::ATTACK;
		break;
	case MonsterState::ATTACK:
		if (HP == 0)
			currentState = MonsterState::DEATH;
		else
		{
			if (!bIsClose)
				currentState = MonsterState::CHASE;
		}
		break;
	case MonsterState::DEATH:
		break;
	default:
		break;
	}
}
