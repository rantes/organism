#ifndef ORGAN_H
#define ORGAN_H

#include "organism.h"

typedef struct
{
    char *name;

    void (*tick)(Organism *);

} Organ;

#endif
