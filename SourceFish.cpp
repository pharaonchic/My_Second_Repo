#include "HeaderFish.h"

int main()
{
    bool good = false, bad = false;
    Aquarium goodfish(10);
    Aquarium badfish(10);

    goodfish.AddFish(Fish("Nemo", false, 2, "Nemo Eater 1 -", rand() % 20, "Nemo", 2));
    goodfish.AddFish(Fish("Nemo", false, 3, "Nemo Eater 2 -", rand() % 20, "Nemo", 3));
    goodfish.AddFish(Fish("Nemo", false, 1, "Nemo Eater 3 -", rand() % 20, "Nemo", 1));
    goodfish.AddFish(Fish("Nemo", false, 4, "Nemo Eater 4 -", rand() % 20, "Nemo", 4));
    badfish.AddFish(Fish("Piranya", true, 2, "Piranya Eater 1 -", rand() % 20, "Piranya", 2));
    badfish.AddFish(Fish("Piranya", true, 3, "Piranya Eater 2 -", rand() % 20, "Piranya", 3));
    badfish.AddFish(Fish("Piranya", true, 1, "Piranya Eater 3 -", rand() % 20, "Piranya", 1));
    badfish.AddFish(Fish("Paranya", true, 4, "Piranya Eater 4 -", rand() % 20, "Piranya", 4));

    goodfish.Bigest();
    badfish.Bigest();

    return 0;
}