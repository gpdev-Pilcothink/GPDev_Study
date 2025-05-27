#include "gamemain.h"
#include "dungeon.h"
#ifndef MONSTER_H
#define MONSTER_H

class monster {
	int defence;
	int damage;
public:
	monster(gamemain *main);
	int run(int floor, gamemain *main);
};

#endif
