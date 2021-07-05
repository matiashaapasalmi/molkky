#ifndef PLAYER_HH
#define PLAYER_HH
#include <string>
#include <iostream>

class Player
{
public:
    Player(std::string name = "", int points = 0, int trows = 0);


    std::string get_name();
    int get_points();
    void add_points(int pts);
    bool has_won();



private:

    std::string name_;
    int points_;
    int trows_;
};

#endif // PLAYER_HH
