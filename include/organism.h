#ifndef ORGANISM_H
#define ORGANISM_H

typedef struct {

    float energy;

    float curiosity;

    float uncertainty;

    float fatigue;

} Organism;

void organism_init(Organism *o);

void organism_tick(Organism *o);

#endif
