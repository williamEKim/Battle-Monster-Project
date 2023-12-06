#pragma once
#include <string>
#include "State.h"
#include "Event.h"
#include "Bench.h"

//TODO import bench once complete
class Player : public State {
protected:
    std::string _name;
    Bench _bench;

public:
    Player(); //player constructor

    std::string getName() const; //return player name
    const Bench* getBench() const;

    //setName() method that sets player name
    void setName(std::string name); 
    void reset();
    void draft(const Monster& monster);

    //getBench(); //TODO implement bench

    // VIRTUAL OVERRIDES
    void addEventHandler(const Event& event);
};