#include "Mystring.h"
#include <iostream>
#include <cstring>

// Implementation
//      of No-args constructor
Mystring::Mystring()
    : str(nullptr) {
        
        str = new char[1];
        *str = '\0';
}

//      of overloaded constructor
Mystring::Mystring(const char *s)
    : str(nullptr) {

        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
}

// Copy Constructor
Mystring::Mystring(const Mystring &source) 
    : str(nullptr) {

        str = new char[std::strlen(source.str) + 1];
}


//  Move Constructor
Mystring::Mystring(Mystring &&source)   // constructor, so creates an object from the source
    : str(source.str) {                 // default uses the source's string attribute
        source.str = nullptr;           // moves the string object to a nullptr
        std::cout << "Move constructor used" << std::endl;
    }


// Copy Destructor
Mystring::Mystring () {
    delete [] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {

    std::cout << "Copy assignment..." << std::endl;  // just logging
    if (this==&rhs) {           // if we're just referencing ourselves...
        return *this;
    }

    delete [] str;              // de-allocate memory that str is taking

    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;

}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs) {
    std::cout << "Using move assignment" << std::endl;
    if (this==&rhs) {           // if we're just referencing ourselves...
    return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// operator methods
bool Mystring::operator==(const Mystring &rhs) const {

    return (std::strcmp(str, rhs.str) == 0);
}

Mystring Mystring::operator-() const {

    char *buff = new char[std::strlen(str) + 1];  // allocate memory to hold a string of same length
    std::strcpy(buff, str);
    for (size_t i=0; i < std::strlen(buff); i++) {
        buff[i] = std::tolower(buff[i]);
    };

    Mystring temp {buff};
    delete [] buff;
    return temp;
}

Mystring Mystring::operator+(const Mystring &rhs) const {

    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// getters
int Mystring::get_length() const {

    return strlen(str);
}

const char *Mystring::get_str() const {

    return str;
}
