/* 
    Models a movie with the following attributes

    std::string name: name of the movie
    std::string rating: the MPAA rating
    int watched: times watched
*/

#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie
{
    private:
        std::string name;
        std::string rating;
        int watched;

    public:
        // Constructor
        Movie(std::string name, std::string rating, int watched);

        // Copy Constructor
        Movie(const Movie &source);

        // Destructor
        ~Movie();

        // getters & setters
        void set_name(std::string name_val) {
            this->name = name_val;
            }

        std::string get_name() const {
            return name;
        }

        void set_rating(std::string rating_val) {
            this->rating = rating_val;
        }

        std::string get_rating() const {
            return rating;
        }

        void set_watched(int watched) {
            this->watched = watched;
        }

        int get_watched() const {
            return watched;
        }

        void increment_watched() {
            ++watched;
        }

        void display() const;
};

#endif