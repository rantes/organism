#include "organism.h"

void organism_init(Organism* o) {
    o->energy = 100;

    o->curiosity = 50;

    o->uncertainty = 100;

    o->fatigue = 0;
}

void organism_tick(Organism* o) {
    o->energy -= 0.2;

    o->fatigue += 0.1;

    o->curiosity += 0.05;

    if (o->curiosity > 100)
        o->curiosity = 100;
}
