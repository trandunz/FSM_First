#include "Agent.h"

Agent::Agent()
{
	m_CurrentState = &State::GetInstance();
}

void Agent::Toggle()
{
	m_CurrentState->OnToggle(this);
}

void Agent::SetState(iState& _newState)
{
	m_CurrentState->OnFinish(this);
	m_CurrentState = &_newState;
	m_CurrentState->OnBegin(this);
}
