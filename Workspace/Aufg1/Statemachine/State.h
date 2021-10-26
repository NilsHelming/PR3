#pragma once

class State {
public:
    State() = default;
    virtual ~State() = default;

    virtual bool isGoal() = 0;
    virtual State& goA() = 0;
    virtual State& goB() = 0;
};

class StateQ0 : public State{
    bool isGoal();
    State& goA();
    State& goB();
};
class StateQ1 : public State{
    bool isGoal();
    State& goA();
    State& goB();
};
class StateQ2 : public State{
    bool isGoal();
    State& goA();
    State& goB();
};
class StateQ3 : public State{
    bool isGoal();
    State& goA();
    State& goB();
};
class StateQ4 : public State{
    bool isGoal();
    State& goA();
    State& goB();
};