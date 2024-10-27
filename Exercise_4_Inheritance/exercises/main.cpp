#include "Movie.h"
#include "Game.h"
#include "Music.h"

int main() {
    tm date = {0};
    date.tm_year = 2023 - 1900;
    date.tm_mon = 9;
    date.tm_mday = 27;

    // Create a Movie object
    Movie movie("Movie", date, 101, "DVD", 1, 19.99, "The Matrix", "PG-13");
    movie.toString();
    movie.playOnDVD();
    movie.playOnVideo();

    // Create a Game object
    Game game("Game", date, 102, "Blu-ray", 1, 59.99, "Cyberpunk 2077", "Hard", "CD Projekt");
    game.toString();
    game.playOnCD();
    game.playOnVideo();

    // Create a Music object
    Music music("Music", date, 103, "CD", 1, 14.99, "Greatest Hits", "Queen");
    music.toString();
    music.playOnCD();

    return 0;
}
