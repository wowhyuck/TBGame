#include "Game2D.h"
#include "Examples/PrimitivesGallery.h"
#include "Examples/TankExample.h"
#include "RandomNumberGenerator.h"
#include <vector>
#include <memory>
//#include "SoundEngine.h"
//#include "SoundEngine_Singleton.h"

namespace jm
{

}

int main(void)
{
	jm::TankExample().run();
	//jm::Game2D().init("This is my digital canvas!", 1280, 960, false).run();
	//jm::PrimitivesGallery().run();

	return 0;
}
