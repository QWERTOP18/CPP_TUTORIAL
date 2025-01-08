#pragma once
#include <string>

class Weapon
{
private:
    std::string type;

public:
    Weapon(const std::string &type);
    ~Weapon();
    void setType(const std::string &newType);
    std::string getType() const;
};
