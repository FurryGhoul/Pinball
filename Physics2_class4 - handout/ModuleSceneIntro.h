#pragma once
#include "Module.h"
#include "p2List.h"
#include "p2Point.h"
#include "Globals.h"

class PhysBody;

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
	p2List<PhysBody*>	leftbouncer;
	p2List<PhysBody*>	rightbouncer;
	PhysBody*			leftflipper;
	PhysBody*			rightflipper;
	PhysBody*			l_flipper_joint;
	PhysBody*			r_flipper_joint;

	PhysBody* sensor;
	bool sensed;

	SDL_Texture* circle;
	SDL_Texture* box;
	SDL_Texture* rick;
	SDL_Texture* BackGround;
	SDL_Texture* RightFlipper;
	SDL_Texture* LeftFlipper;
	SDL_Texture* LeftBouncer;
	SDL_Texture* RightBouncer;
	uint bonus_fx;
	p2Point<int> ray;
	bool ray_on;
};
