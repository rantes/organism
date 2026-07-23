#ifndef ORGANISM_H
#define ORGANISM_H

#include "homeostasis.h"
#include "hormones.h"

typedef struct {

    Homeostasis homeostasis;

    Hormones hormones;

    // Memory memory;

    // Prediction prediction;

    // Novelty novelty;

    // Contradiction contradiction;

} Organism;

void organism_init(Organism *o);

void organism_tick(Organism *o);

#endif
