#pragma once

#include "Agent.h"

class Agent;
class iState
{
public:
	virtual ~iState() = default;
	virtual void OnBegin(Agent* _agent) = 0;
	virtual void OnToggle(Agent* _agent) = 0;
	virtual void OnFinish(Agent* _agent) = 0;
};

