#ifndef KRATOS_H
#define KRATOS_H

#include "Hero.h"

class Kratos : public Hero
{
public:
    Kratos();
    virtual ~Kratos();
    virtual void Strike();
    Kratos* getpointer();

private:
    Kratos* kratos;
};

#endif // KRATOS_H
