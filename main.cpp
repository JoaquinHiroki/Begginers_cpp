#include <iostream>
#include <string>
#include "movies.h"

using namespace std;

// Function prototypes
void increment_views(Movies &movies, string name);
void add_movie(Movies &movies, string name, string classification);
void rate_movie(Movies &movies, string name, float rating);

/**************************************************** ****************
 * increment_views expects a reference to a Movies object
 * and the name of the movie to increase your view count
 *
 * If the view count is successfully increased
 * displays a success message
 * otherwise the count could not be incremented because
 * the movie with that name was not found
 ***************************************************** ************/

void increment_views(Movies &movies, string name) {
    if (movies.increment_views(name)) {
        cout << name << " views incremented" << endl;
    } else {
        cout << name << "not found" << endl;
    }
}

/**************************************************** ****************
 * add_movie expects a reference to a Movies object,
 * the name of the movie and the classification
 *
 * If the movie is successfully added to the Movies object
 * displays a success message
 * otherwise the movie was not added
 * because the movie name was already in the Movies object
 ***************************************************** ************/
void add_movie(Movies &movies, string name, string classification) {
    if (movies.add_movie(name, classification)) {
        cout << name << " added" << endl;
    } else {
        cout << name << "already exists" << endl;
    }
}

/**************************************************** ****************
 * rate_movie expects a reference to a Movies object,
 * the name of the movie and the rating
 *
 * If the movie is successfully rated
 * displays a success message
 * otherwise the movie was not rated
 * because the name of the movie does not exist in the Movies object
 * or because the rating is not between 0 and 5
 ***************************************************** ************/
void rate_movie(Movies &movies, string name, float rating) {
    if (movies.rate_movie(name, rating)) {
        cout << name << " rated" << endl;
    }
}

int main() {
    
    Movies my_movies;
    
    my_movies.show_movies();
    
    add_movie(my_movies, "Big", "PG-13"); // Big added
    add_movie(my_movies,"Star Wars", "PG"); // Star Wars added
    add_movie(my_movies,"Cinderella", "PG"); // Cinderella added
     
    my_movies.show_movies(); // Big, Star Wars, Cinderella with their information (name, rating, views, rating and number of ratings)
    
    add_movie(my_movies,"Cinderella", "PG"); // Cinderella already exists
    add_movie(my_movies,"Ice Age", "PG"); // Ice Age added
 
    my_movies.show_movies(); // Big, Star Wars, Cinderella, Ice Age with their information (name, rating, views, rating and number of ratings)

    increment_views(my_movies,"Big"); // Big increased views
    increment_views(my_movies,"Ice Age"); // Ice Age views increased
    rate_movie(my_movies, "Ice Age", 3.1); // Ice Age rated
    rate_movie(my_movies, "Ice Age", 4.5); // Ice Age rated
    rate_movie(my_movies, "Ice Age", 3.9); // Ice Age rated
    rate_movie(my_movies, "XXX", 3.9); // XXX not found
    rate_movie(my_movies, "Cinderella", 7.2); // invalid rate
    
    my_movies.show_movies(); // Big and Ice Age views increased by 1 and Ice Age rating changed

    increment_views(my_movies,"XXX"); // XXX not found

return 0;
}