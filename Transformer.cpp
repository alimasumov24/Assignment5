#include "Transformer.h"

Transformer::Transformer(const std::string &name) : _name(name) {
    std::cout << "Transformer " << _name << " created.\n";
}

Transformer::~Transformer() {
    std::cout << "Transformer " << _name << " destroyed.\n";
}

void Transformer::transform() const {
    std::cout << "Transforming: " << _name << " (Base Transformer)\n";
}

void Transformer::openFire() const {
    std::cout << "Opening fire: " << _name << " (Base Transformer)\n";
}

void Transformer::ultra() const {
    std::cout << "Ultra mode: " << _name << " (Base Transformer)\n";
}