#include "AIE.h"
#include <iostream>
#include "clouds.h"

using namespace std;

int main( int argc, char* argv[] )
{	
    Initialise(800, 600, false, "My Awesome Game");
    SetBackgroundColour(SColour(0, 0, 0, 255));
   
	//Game Loop
    do
    {
        ClearScreen();


    } while(!FrameworkUpdate());

    Shutdown();

    return 0;
}
