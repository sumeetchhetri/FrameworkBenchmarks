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
	#pragma @Id dbf="_id"
	int id;
	#pragma @Column dbf="randomNumber"
	int randomNumber;
	#pragma @IgnoreSer
	#pragma @Column dbf="id"
	int anotherId;
public:
	TeBkCachedWorld();
	virtual ~TeBkCachedWorld();
	int getId() const;
	void setId(int id);
	int getRandomNumber() const;
	void setRandomNumber(int randomNumber);
	int getAnotherId() const;
	void setAnotherId(int anotherId);
};

#endif /* TeBkCachedWorld_H_ */
