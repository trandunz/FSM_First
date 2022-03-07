#include "State.h"
void State::OnBegin(Agent* _agent)
{
}
void State::OnToggle(Agent* _agent)
{
}
void State::OnFinish(Agent* _agent)
{
}
iState& State::GetInstance()
{
	static State singleton;
	return singleton;
}

State::State(const State& _otherState)
{
    GetInstance() = _otherState;
}
