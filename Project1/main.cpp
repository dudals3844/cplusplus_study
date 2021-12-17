#include <iostream>

class Animal {
private:
    int food;
    int weight;
public:
    void set_animal(int _food, int _weight) {
        food = _food;
        weight = _weight;
    }

    void increase_fooe(int inc) {
        food += inc;
        weight += (inc / 3);
    }

    void view_stat(){
        std::cout << "Animal food: " << food << std::endl;
        std::cout << "Animal weight: " << weight << std::endl;
    }
};

int main() {
    Animal tiger;
    tiger.set_animal(100, 50);
    tiger.increase_fooe(30);
    tiger.view_stat();
    return 0;
}
