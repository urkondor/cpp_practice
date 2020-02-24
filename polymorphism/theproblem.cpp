#include <iostream>

class Base {
    public:

    void say_hello() const {
        std::cout << "Hello - I am a base class object" << std::endl;
    }
};

class Derived: public Base {
    public:

    void say_hello() const {
        std::cout << "Hello - I'm a derived class object" << std::endl;
    }
};

void greetings(const Base &obj) { // obj is a reference to a base, & static polymorphism....
    std::cout << "Greetings: ";
    obj.say_hello();
}

int main() {

    Base b;
    b.say_hello();

    Derived d;
    d.say_hello();

    std::cout << "---------------\n" << std::endl;

    greetings(b);
    greetings(d);  // this points to a base, not a derived

    Base *ptr = new Derived();  // Derived is a base; ptr to a base, so it will behave like a base
    ptr->say_hello();   // bound to a base

    return 0;
}
