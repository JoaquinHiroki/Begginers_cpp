#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

using namespace std;


class Movie {
    private:
        string name;
        string classification;
        int views;
        float rating;
        float sum_of_ratings;
        int number_of_ratings;

    public:
        Movie(const std::string &name, const std::string &classification);
        std::string get_name() const;
        void rate(float user_rating);
        void increment_views();
        void print_movie() const;

};

#endif