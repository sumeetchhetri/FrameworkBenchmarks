/*
 * TeBkCachedWorld.h
 *
 *  Created on: 11-Mar-2015
 *      Author: sumeetc
 */

#ifndef TeBkCachedWorld_H_
#define TeBkCachedWorld_H_
#include "string"


#pragma @Entity
#pragma @Table name="cachedworld"
class TeBkCachedWorld {
	#pragma @Id dbf="id"
	int id;
	#pragma @Column dbf="randomNumber"
	int randomNumber;
public:
	TeBkCachedWorld();
	virtual ~TeBkCachedWorld();
	int getId() const;
	void setId(int id);
	int getRandomNumber() const;
	void setRandomNumber(int randomNumber);
};

#endif /* TeBkCachedWorld_H_ */
