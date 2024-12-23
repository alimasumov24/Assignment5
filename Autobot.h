#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
    Autobot(const std::string &name);
    ~Autobot();

    void transform() const override;
    void openFire() const override;
    void ultra() const override;
};

#endif // AUTOBOT_H