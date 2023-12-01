#include "movies.h"
#include <iostream> 

using namespace std;


bool Movies::increment_views(string name) {
    for (Movie &movie : movies) {
        if (movie.get_name() == name) {
            movie.increment_views();
            return true;
        }
    }

    cout << name << "Not available name, type another movie" << endl;
    return false;

}


bool Movies::add_movie(string name, string classification) {
    for (const Movie &movie : movies ) {
        if (movie.get_name() == name) {
            cout << name << "This movie is already in the list " << endl;
            return false;
        }
    }
    movies.push_back(Movie(name, classification));
    return true;
}

bool Movies::rate_movie(string name, float rating) {
    for (Movie &movie : movies) {
        if (movie.get_name() == name) {
            movie.rate(rating);
            return true;
        }
    }
    cout << name << "The movie was not found" << endl;
    return false;
}

void Movies::show_movies() const {
    for (const Movie &movie : movies) {
        movie.print_movie();
    }
}

