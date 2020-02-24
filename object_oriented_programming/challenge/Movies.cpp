#include <iostream>
#include "Movies.h"

Movies::Movies() {

}

Movies::~Movies() {

}

bool Movies::add_movie(std::string name, std::string rating, int watched) {

    for (const Movie movie: movies) {  // const to make sure no changes get made in this scope
        if (movie.get_name() == name) {
            return false;
        };
        Movie this_movie {name, rating, watched};
        movies.push_back(this_movie);
    }
}

bool Movies::increment_watched(std::string name) {

    for (Movie &movie: movies) {
        if (movie.get_name() == name) {
            movie.increment_watched();
            return true;
        }
    }
    return false;
}

void Movies::display() const {

    if (movies.size() == 0) {
        std::cout << "Sorry, no movies to display.\n" << std::endl;
    } else {
        for (Movie movie: movies) {
            movie.display();
        }
    }

}