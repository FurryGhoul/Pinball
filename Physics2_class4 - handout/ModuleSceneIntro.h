#pragma once
#include "Module.h"
#include "p2List.h"
#include "p2Point.h"
#include "Globals.h"

class PhysBody;
class b2RevoluteJoint;

class ModuleSceneIntro : public Module
{
public:
	ModuleSceneIntro(Application* app, bool start_enabled = true);
	~ModuleSceneIntro();

	bool Start();
	update_status Update();
	bool CleanUp();
	void OnCollision(PhysBody* bodyA, PhysBody* bodyB);

public:
	p2List<PhysBody*>	circles;
	p2List<PhysBody*>	boxes;
	p2List<PhysBody*>	ricks;
	PhysBody*			leftflipper;
	PhysBody*			rightflipper;
	PhysBody*			l_flipper_joint;
	PhysBody*			r_flipper_joint;

	PhysBody* sensor;
	bool sensed;

	b2RevoluteJoint* joint_1;
	b2RevoluteJoint* joint_2;

	SDL_Texture* circle;
	SDL_Texture* box;
	SDL_Texture* rick;
	SDL_Texture* BackGround;
	SDL_Texture* RightFlipper;
	SDL_Texture* LeftFlipper;
	uint bonus_fx;
	p2Point<int> ray;
	bool ray_on;
};
