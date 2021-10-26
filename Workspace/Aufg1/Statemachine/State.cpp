#include "State.h"

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
