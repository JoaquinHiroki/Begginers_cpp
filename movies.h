#include <vector>
#include <string>

#ifndef _MOVIES_H_
#define _MOVIES_H_

#include "movie.h"

using namespace std;

class Movies {
    private:
        vector<Movie> movies;
    public:
        bool increment_views(string name);
        bool add_movie(string name, string classification);
        bool rate_movie(string name, float rating);
        void show_movies() const;
};

#endif