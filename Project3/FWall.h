#pragma once

#include "AActor.h"

class AWall : public AActor
{
public:
	AWall();
	virtual ~AWall();

	virtual void Tick() override;
};

