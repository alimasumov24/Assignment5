#include "Autobot.h"

Autobot::Autobot(const std::string &name) : Transformer(name) {
    std::cout << "Autobot " << _name << " created.\n";
}

Autobot::~Autobot() {
    std::cout << "Autobot " << _name << " destroyed.\n";
}

void Autobot::transform() const {
    std::cout << "Transforming: " << _name << " (Autobot)\n";
}

void Autobot::openFire() const {
    std::cout << "Opening fire: " << _name << " (Autobot)\n";
}

void Autobot::ultra() const {
    std::cout << "Ultra mode: " << _name << " (Autobot)\n";
}