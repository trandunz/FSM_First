#pragma once
#include "iState.h"
class State : public iState
{
public:


    void OnBegin(Agent* _agent)
    {

    }
    void OnToggle(Agent* _agent)
    {
        
    }
    void OnFinish(Agent* _agent)
    {

    }

    static iState& GetInstance();


private:
    State();
    State(const State& _otherState)
    {
        GetInstance() = _otherState;
    }
    virtual ~State() = default;
};

