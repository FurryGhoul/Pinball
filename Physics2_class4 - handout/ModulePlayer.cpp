#include "Globals.h"
#include "Application.h"
#include "ModulePlayer.h"

ModulePlayer::ModulePlayer(Application* app, bool start_enabled) : Module(app, start_enabled)
{
}

ModulePlayer::~ModulePlayer()
{}

// Load assets
bool ModulePlayer::Start()
{
	LOG("Loading player");
	return true;
}

// Unload assets
bool ModulePlayer::CleanUp()
{
	LOG("Unloading player");

	return true;
}

// Update: draw background
update_status ModulePlayer::Update()
{
<<<<<<< HEAD
=======
	if (App->input->GetKey(SDL_SCANCODE_LEFT) == KEY_DOWN)
	{
		App->scene_intro->leftflipper->body->ApplyAngularImpulse(-5.0f,true);
	}

	if (App->input->GetKey(SDL_SCANCODE_RIGHT) == KEY_DOWN)
	{
		App->scene_intro->rightflipper->body->ApplyAngularImpulse(5.0f, true);
	}

>>>>>>> 5513f88c68895c0dd9d1c5a6de48789bd2238af1
	return UPDATE_CONTINUE;
}



