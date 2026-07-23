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

            brain.energy,

            brain.curiosity,

            brain.fatigue
        );
    }

    return 0;
}
