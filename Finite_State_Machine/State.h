#pragma once
#include "iState.h"
class State :
    public iState
{
public:
    static State& GetInstance()
    {
        static State state;
        return state;
    }

    void OnBegin(Agent& _agent)
    {

    }
    void OnToggle(Agent& _agent)
    {

    }
    void OnFinish(Agent& _agent)
    {

    }

private:
    State();
    State(State& const _otherState)
    {
        GetInstance() = _otherState;
    }
    virtual ~State() = default;
};

