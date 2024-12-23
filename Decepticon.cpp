#include "Decepticon.h"

Decepticon::Decepticon(const std::string &name) : Transformer(name) {
    std::cout << "Decepticon " << _name << " created.\n";
}

Decepticon::~Decepticon() {
    std::cout << "Decepticon " << _name << " destroyed.\n";
}

void Decepticon::transform() const {
    std::cout << "Transforming: " << _name << " (Decepticon)\n";
}

void Decepticon::openFire() const {
    std::cout << "Opening fire: " << _name << " (Decepticon)\n";
}

void Decepticon::ultra() const {
    std::cout << "Ultra mode: " << _name << " (Decepticon)\n";
}