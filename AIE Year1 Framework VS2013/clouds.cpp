#include <clouds.h>
#include <AIE.h>

clouds::clouds()
{
	float x, y;
	unsigned int spriteID = CreateSprite("./images/cannon.png", 10, 10, false);
	bool isAlive = false;
}


void clouds::SpawnClouds()
{
	
	for (int i = 0; i < 80; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			clouds();
		}
	}
}

clouds::~clouds()
{

}