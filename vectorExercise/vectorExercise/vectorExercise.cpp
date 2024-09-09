#include <iostream>
#include <vector>
#include <string>

class Person {
public:
    std::string name;
    int age;

    Person(std::string n, int a) : name(n), age(a) {}
    virtual ~Person() {}  // Virtuell destruktor för korrekt polymorfism

    // Virtuell funktion för att skriva ut information
    virtual void printInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

class Car : public Person {
public:
    std::string colour;

    // Använd en default tom sträng för name och sätt age och colour
    Car(int a, std::string c) : Person("", a), colour(c) {}

    // Override printInfo för att anpassa utskriften
    void printInfo() const override {
        std::cout << "Car Age: " << age << ", Colour: " << colour << std::endl;
    }
};

int main() {
    // Skapa en vektor av pekare till Person-objekt
    std::vector<Person*> people;

    // Lägg till några Person-objekt
    people.push_back(new Person("Alice", 30));
    people.push_back(new Person("Bob", 25));
    people.push_back(new Person("Charlie", 35));
    people.push_back(new Car(10, "red"));

    // Iterera och skriv ut informationen med hjälp av polymorfism
    for (const auto& person : people) {
        person->printInfo();
    }

    // Rensa minnet
    for (auto& person : people) {
        delete person;
    }

    return 0;
}
