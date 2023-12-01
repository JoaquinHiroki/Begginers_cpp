#include "movie.h"
#include <iostream>

using namespace std;

Movie::Movie(const std::string &name, const std::string &classification)
    : name(name), classification(classification), views(0), rating(0.0f), sum_of_ratings(0.0f), number_of_ratings(0) {}

string Movie::get_name() const {
    return name;
}

void Movie::rate(float user_rating) {
    if (user_rating >= 0.0f && user_rating <= 5.0f) {
        sum_of_ratings += user_rating;
        number_of_ratings++;
        rating = sum_of_ratings / number_of_ratings;

    } else {
        cout << "Please rate the movie in a scale from 0.0 to 5.0" << endl;
    }
}

void Movie::increment_views() {
    views++;
}


void Movie::print_movie() const {
    cout << "Name: " << name << endl;
    cout << "Classification: " << classification << endl;
    cout << "Views: " << views << endl;
    cout << "Rating: " << rating << endl;
    cout << "Number of ratings: " << number_of_ratings << endl;
}