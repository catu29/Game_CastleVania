#pragma once
#include "GameObject.h"

#define STAIR_TYPE_TOP_LEFT			0	// On top of stairs having shape '\'
#define STAIR_TYPE_BOTTOM_LEFT		1	// On bottom of stairs having shape '\'
#define STAIR_TYPE_MID_LEFT			2	// In the middle of stairs having shape '\'

#define STAIR_TYPE_TOP_RIGHT		3	// On top of stairs having shape '/'
#define STAIR_TYPE_BOTTOM_RIGHT		4	// On bottom of stairs having shape '/'
#define STAIR_TYPE_MID_RIGHT		5	// In the middle of stairs having shape '/'

class Stair : public GameObject
{
private:
	int type;

public:
	Stair(int type);
	~Stair();

	int GetType() { return this->type; }

	void Render(ViewPort * camera);
	CollisionBox GetBoundingBox();

	void SetCellsOffSet(float cellWidth, float cellHeight);
};