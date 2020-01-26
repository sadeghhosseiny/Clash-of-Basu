#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Hero.h"

class Professor : public Hero
{
    public:
        Professor();
        virtual ~Professor();
        virtual void Strike();

    protected:

    private:
};

#endif // PROFESSOR_H
