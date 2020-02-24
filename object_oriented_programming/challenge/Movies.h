#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <vector>
#include <string>
#include "Movie.h"

class Movies {
    private:
        std::vector<Movie> movies;

    public:
        // prototypes
        Movies();   // Constructor
        ~Movies();  // yep

        bool add_movie(std::string name, std::string rating, int watched);

        bool increment_watched(std::string name);

        void display() const;       
};

#endif // MOVIES_H_