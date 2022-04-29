#include "Player.h"

Player::Player()
{

}

Player::~Player()
{

}

void Player::playDAH() const
{
	PlaySound("../res/sounds/DAH.wav", NULL, SND_SYNC);
}

void Player::playDIT() const
{
	PlaySound("../res/sounds/DIT.wav", NULL, SND_SYNC);
}

void Player::playLetter(std::string letter) const
{
    for (int i = 0; i < letter.size() / 3; i++)
    {
        if (letter.substr(3 * i, 3) == "DAH")
        {
            playDAH();
        }
        else if (letter.substr(3 * i, 3) == "DIT")
        {
            playDIT();
        }
    }

    pause(100);
}

void Player::pause(int delay) const
{
	std::this_thread::sleep_for(std::chrono::milliseconds(delay));
}



