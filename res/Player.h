#pragma once

#include <windows.h>
#include <chrono>
#include <thread>
#include <string>



class Player
{
public:
	Player();
	~Player();

	void playDAH() const;

	void playDIT() const;

	void pause(int delay) const;

	void Player::playLetter(std::string letter) const;

};