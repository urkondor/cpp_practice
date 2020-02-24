#include <iostream>
#include "Movie.h"

// constructor implemented
Movie::Movie(std::string name, std::string rating, int watched) 
    :name(name), rating(rating), watched(watched) {
}

// copy constructor implementation
Movie::Movie(const Movie &source)
    :Movie(source.name, source.rating, source.watched) {

    }

Movie::~Movie() {
    std::cout << "Movie purged." << std::endl;
}

void Movie::display() const {
    std::cout << name << ", " << rating << ", " << watched << std::endl;
}
