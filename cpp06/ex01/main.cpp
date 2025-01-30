#include <iostream>

#include "Serializer.hpp"



int main() {
    Data person;
    person.name = "Kotaro";
    person.email = "Kotaro@kawauso.com";
    person.age = 1;
    person.birthYear = 2024;
    person.birthMonth = 2;
    person.birthDay = 1;
    person.isPhilosopher = false;

    std::cout << person << std::endl;

    // Serialization
    uintptr_t serializedData = Serializer::serialize(&person);

    std::cout << "Serialized Data: " << serializedData << std::endl;

    // Reset original data
    person.age = 2;

    // Deserialization
    Data deserializedData = *Serializer::deserialize(serializedData);

    std::cout << deserializedData << std::endl;

    return 0;
}

