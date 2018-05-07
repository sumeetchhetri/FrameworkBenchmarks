/*
 * TeBkCachedWorld.cpp
 *
 *  Created on: 11-Mar-2015
 *      Author: sumeetc
 */

#include "TeBkCachedWorld.h"

int TeBkCachedWorld::getId() const {
	return id;
}

void TeBkCachedWorld::setId(int id) {
	this->id = id;
}

int TeBkCachedWorld::getRandomNumber() const {
	return randomNumber;
}

void TeBkCachedWorld::setRandomNumber(int randomNumber) {
	this->randomNumber = randomNumber;
}

TeBkCachedWorld::TeBkCachedWorld() {
	id = 0;
	randomNumber = 0;
	anotherId = 0;
}

TeBkCachedWorld::~TeBkCachedWorld() {
	// TODO Auto-generated destructor stub
}

int TeBkCachedWorld::getAnotherId() const {
	return anotherId;
}

void TeBkCachedWorld::setAnotherId(int anotherId) {
	this->anotherId = anotherId;
}

