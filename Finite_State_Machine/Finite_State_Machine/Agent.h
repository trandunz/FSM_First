#pragma once
#include "State.h"

class Agent
{
public:
	Agent()
	{
		m_CurrentState = &State::GetInstance();
	}

	iState& GetCurrentState() const { return *m_CurrentState; }
	inline void Toggle() { m_CurrentState->OnToggle(this); }
	inline void SetState(iState& _newState) 
	{
		m_CurrentState->OnFinish(this);
		m_CurrentState = &_newState; 
		m_CurrentState->OnBegin(this);
	}
private:
	iState* m_CurrentState;
};

