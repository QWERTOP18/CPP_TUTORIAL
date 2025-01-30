#include "Serializer.hpp"


Serializer::Serializer() {
    std::cout <<"Serializer constructor called!!! HI:(" << std::endl;
}

Serializer::~Serializer() {
    std::cout <<"Serializer destructor called!!! Bye:(" << std::endl;
}

Serializer::Serializer(const Serializer &src) {
    std::cout <<"Serializer copy constructor called!!! Copying:(" << std::endl;
    (void) src;
}

Serializer &Serializer::operator=(const Serializer &src) {
    std::cout <<"Serializer assignment operator called!!! Assigning:(" << std::endl;
    (void) src;
    return *this;
}
// static Serializer::uintptr_t serialize(Data *ptr) {
//     return reinterpret_cast<uintptr_t>(ptr);
// }
// static Serializer::Data *deserialize(uintptr_t raw) {
//     return reinterpret_cast<Data *>(raw);
// }
uintptr_t Serializer::serialize(Data* ptr) {
    std::cout << "Serializing data" << std::endl;
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
    std::cout << "Deserializing data" << std::endl;
    return reinterpret_cast<Data*>(raw);
}

std::ostream& operator<<(std::ostream& os, const Data& data)
{
    os << "Name: " << data.name << "\n";
    os << "Email: " << data.email << "\n";
    os << "Age: " << data.age << "\n";
    os << "Birth Date: " << data.birthYear << "/" << data.birthMonth << "/" << data.birthDay << "\n";
    os << "Is Philosopher: " << (data.isPhilosopher ? "Yes" : "No") << "\n";
    return os;
}
