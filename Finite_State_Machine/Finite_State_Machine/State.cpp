#include "State.h"
iState& State::GetInstance()
{
	static State singleton;
	return singleton;
}