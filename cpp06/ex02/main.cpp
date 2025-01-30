#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main() {
    Base *base = new A();
    Base &baseRef = *base;

    base->identify(base);
    base->identify(baseRef);

    delete base;

    return 0;
}