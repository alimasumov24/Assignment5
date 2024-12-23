

#include <iostream>
#include <vector>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"


int main() {
    // Прямое тестирование методов
    Autobot a("Optimus Prime");
    a.transform();
    a.openFire();
    a.ultra();

    Decepticon d("Megatron");
    d.transform();
    d.openFire();
    d.ultra();

    // Тестирование вызова методов через указатель на базовый класс
    Transformer* t1 = &a;
    Transformer* t2 = &d;

    t1->transform();
    t2->transform();

    // Создание вектора указателей на объекты
    std::vector<Transformer*> transformers;
    for (int i = 0; i < 3; ++i) {
        transformers.push_back(new Autobot("Autobot " + std::to_string(i+1)));
        transformers.push_back(new Decepticon("Decepticon " + std::to_string(i+1)));
    }

    // Вызов виртуальных методов в цикле
    for (const auto& t : transformers) {
        t->transform();
        t->openFire();
        t->ultra();
    }

    // Очистка памяти
    for (auto& t : transformers) {
        delete t;
    }

    return 0;
}