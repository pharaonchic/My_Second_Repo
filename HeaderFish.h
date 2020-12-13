#pragma once

#include <iostream>
#include <string>
#include <vector>


class Fish {
private:
    std::string preferred_food;
    bool is_agressive;
    int needed_space;
    std::string name;
    int age;
    std::string species;
    int size;

public:
    std::string getFood();

    bool getAgressive();

    int getSpace();

    std::string getName();

    int getAge();

    std::string getSpecies();

    int getSize();

    Fish(std::string food, bool agressive, int space, std::string name, int age, std::string species, int size) {
        this->preferred_food = food;
        this->is_agressive = agressive;
        this->needed_space = space;
        this->name = name;
        this->age = age;
        this->species = species;
        this->size = size;
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

    std::vector <Fish> Sort(std::vector <Fish> array) {
        int len = array.size();
        for (int i = len; i > 0; i--) {
            for (int j = len - i; j > 0; j--) {
                if (array[j].getSize() > array[j - 1].getSize()) {
                    std::swap(array[j], array[j - 1]);
                }
            }
        }

        return array;
    }

    Aquarium(float volume) {
        this->freeSpace = volume;
    }


};

std::string Fish::getFood() {
    return preferred_food;
}

bool Fish::getAgressive() {
    return is_agressive;
}

int Fish::getSpace() {
    return needed_space;
}

std::string Fish::getName() {
    return name;
}

int Fish::getAge() {
    return age;
}

std::string Fish::getSpecies() {
    return species;
}

int Fish::getSize() {
    return size;
}
