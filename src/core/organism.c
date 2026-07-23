#include "organism.h"

void organism_init(Organism* o) {
    o->homeostasis.energy = 100;
    o->homeostasis.curiosity = 50;
    o->homeostasis.uncertainty = 100;
    o->homeostasis.fatigue = 0;
}

void organism_tick(Organism* o) {
    o->homeostasis.energy -= 0.2;
    o->homeostasis.fatigue += 0.1;
    o->homeostasis.curiosity += 0.05;

    if (o->homeostasis.curiosity > 100)
        o->homeostasis.curiosity = 100;
}
