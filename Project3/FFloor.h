#pragma once

#include "AActor.h"

class AFloor : public AActor
{
public:
	AFloor();
	virtual ~AFloor();

	virtual void Tick() override;
};

