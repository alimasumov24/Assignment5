#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <iostream>
#include <string>

class Transformer {
public:
    Transformer(const std::string &name);
    virtual ~Transformer();

    virtual void transform() const;
    virtual void openFire() const;
    virtual void ultra() const;

protected:
    std::string _name;
};

#endif // TRANSFORMER_H