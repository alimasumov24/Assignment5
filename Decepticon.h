#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
public:
    Decepticon(const std::string &name);
    ~Decepticon();

    void transform() const override;
    void openFire() const override;
    void ultra() const override;
};

#endif // DECEPTICON_H