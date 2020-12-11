#pragma once
#include <iostream>
#include <string>
#include <vector>


class Fish {
private:
    std::string preferredFood;
    bool isAgressive;
    int NeededSpace;
    std::string Name;
    int Age;
    std::string Species;
    int Size;

public:
    std::string getFood();
    bool getAgressive();
    int getSpace();
    std::string getName();
    int getAge();
    std::string getSpecies();
    int getSize();

    Fish(std::string Food, bool Agressive, int Space, std::string Name, int Age, std::string Species, int Size) {
        this->preferredFood = Food;
        this->isAgressive = Agressive;
        this->NeededSpace = Space;
        this->Name = Name;
        this->Age = Age;
        this->Species = Species;
        this->Size = Size;
    }

    ~Fish() {}

};
class Aquarium {
private:
    int freeSpace;
    std::vector <Fish> fish;

public:
    bool AddFish(Fish fish) {
        if (freeSpace - fish.getSpace() >= 0) {
            this->fish.push_back(fish);
            freeSpace -= fish.getSpace();
            return true;
        }
        else {
            std::cout << "Aquarium is full!\n";
            return false;
        }
    }

    int getFreeSpace() { return freeSpace; }

    void bigest() {
        fish = Sort(fish);
        std::cout << "Rating:\n";
        for (auto& f : fish) {
            std::cout << f.getName() << " " << f.getSize() << " " << std::endl;
        }
    }

    std::vector<Fish> Sort(std::vector<Fish> array)
    {
        int len = array.size();
        for (int i = len; i > 0; i--)
        {
            for (int j = len - i; j > 0; j--)
            {
                if (array[j].getSize() > array[j - 1].getSize())
                {
                    std::swap(array[j], array[j - 1]);
                }
            }
        }

        return array;
    }

    Aquarium(float Volume) {
        this->freeSpace = Volume;
    }


};
std::string Fish::getFood() {
    return preferredFood;
}
bool Fish::getAgressive() {
    return isAgressive;
}
int Fish::getSpace() {
    return NeededSpace;
}
std::string Fish::getName() {
    return Name;
}
int Fish::getAge() {
    return Age;
}
std::string Fish::getSpecies() {
    return Species;
}
int Fish::getSize() {
    return Size;
}
