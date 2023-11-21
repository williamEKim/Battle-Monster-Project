#pragma once
#include <string>
#include "States.h"
#include "Event.h"

//TODO import bench once complete
class Player : public States {
    protected:
    //Bench _bench;
    std::string _name;

    public:


    std::string GetName(); //return player name

    //GetBench(); //TODO implement bench

    // VIRTUAL OVERRIDES
    void addEventHandler(Event event);
    void update();
    Player(); //player constructor
};