#include "player.hh"

Player::Player(std::string name, int points, int trows):
    name_(name), points_(points), trows_(trows)
{

}


std::string Player::get_name(){

    std::string name = "";
    name = name_;
    return name;
}


int Player::get_points(){
    int points = 0;
    points = points_;
    return points;
}


void Player::add_points(int pts){
    points_ = points_ + pts;

    if(points_ > 50){
        std::cout << name_ << " gets penalty points!" << std::endl;
        points_ = 25;
    }
}

bool Player::has_won(){
    bool totuus = false;
    if(points_ == 50){
        totuus = true;

    }
    return totuus;
}

