//
// Created by pavel on 26.03.19.
//

#ifndef TASK1_PROGRAMMER_H
#define TASK1_PROGRAMMER_H

#include "Engineer.h"

class Programmer: public Engineer
{
public:
    Programmer(unsigned _id, std::string _name, int _worktime, double _base, PROJECT _project,
            double _involvement): Engineer(_id, _name, _worktime, _base, _project, _involvement)
    {}

    void setPayment() override
    {
        payment = calcTimePayment() + calcProjectPayment();
    }
    double calcTimePayment() override
    {
        return base * worktime;
    }

    double calcProjectPayment() override
    {
        return involvement * project.budget;
    }

};

#endif //TASK1_PROGRAMMER_H
