#pragma once
#include "State.h"
class iState;
class Agent
{
public:
	Agent();

	iState& GetCurrentState() const { return *m_CurrentState; }
	void Toggle();
	void SetState(iState& _newState);
private:
	iState* m_CurrentState;
};

