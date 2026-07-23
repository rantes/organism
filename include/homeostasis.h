#ifndef HOMEOSTASIS_H
#define HOMEOSTASIS_H

typedef struct {

    float energy;

    float fatigue;

    float curiosity;

    float uncertainty;

    float coherence;

} Homeostasis;

void homeostasis_init(Homeostasis *homeostasis);

void homeostasis_update(Homeostasis *homeostasis);
#endif