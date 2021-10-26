#include <string>
#include <stdexcept>
#include <iostream>


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

bool StateQ0::isGoal(){return true;}
State& StateQ0::goA(){delete this; return *new StateQ1();}
State& StateQ0::goB(){delete this; return *new StateQ4();}

bool StateQ1::isGoal(){return false;}
State& StateQ1::goA(){delete this; return *new StateQ4();}
State& StateQ1::goB(){delete this; return *new StateQ2();}

bool StateQ2::isGoal(){return true;}
State& StateQ2::goA(){delete this; return *new StateQ3();}
State& StateQ2::goB(){delete this; return *new StateQ4();}

bool StateQ3::isGoal(){return true;}
State& StateQ3::goA(){delete this; return *new StateQ1();};
State& StateQ3::goB(){delete this; return *new StateQ2();};

bool StateQ4::isGoal(){return false;}
State& StateQ4::goA(){return *this;}
State& StateQ4::goB(){return *this;}

class Manager {
    State* state = nullptr; //this has to be written in EVERY constructor!

public:
    Manager(){this->state = new StateQ0();}
    ~Manager(){delete this->state;}

    bool isSuccessful(){return this->state->isGoal();}

    void parse(std::string str){
        for(char c : str)
            parse(c);
    }
    void parse(char c){
        switch(c){
            case 'a':
                this->state = &state->goA();
            break;
            case 'b':
                this->state = &state->goB();
            break;
            default:
                throw new std::invalid_argument("cannot parse characters other than 'a' or 'b'. Was " + c);
        }
    }
};

int main(){
    Manager m;
    m.parse("aba");
    std::cout << m.isSuccessful() << std::endl;
    return 0;
}