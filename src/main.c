#include <stdio.h>

#include <organism.h>

int main()
{
    Organism brain;

    organism_init(&brain);

    for(int i=0;i<20;i++)
    {
        organism_tick(&brain);

        printf(
            "Energy %.2f Curiosity %.2f Fatigue %.2f\n",
            (double)brain.homeostasis.energy,
            (double)brain.homeostasis.curiosity,
            (double)brain.homeostasis.fatigue
        );
    }

    return 0;
}
