#include "Game2D.h"
#include "PrimitivesGallery.h"
#include "TankExample.h"
#include "FaceExample.h"
#include "WalkingPerson.h"
#include "SolarSystem.h"

namespace jm
{
	class TransformationExample : public Game2D
	{
		float time = 0;

	public:
		void update() override
		{
			setLineWidth(3.0f);
			
			scale(2.0f, 0.25f);

			rotate(time * 90.0f);

			translate(0.5f, 0.0f);

			drawWiredBox(Colors::gold, 0.5f, 0.5f);
			
			time += this->getTimeStep();
		}
	};
}

int main(void)
{
	jm::TransformationExample().run();
	//jm::MouseExample().init("This is my digital canvas!", 1000, 1000, false).run();
	//jm::Game2D().init("This is my digital canvas!", 1280, 960, false).run();
	//jm::RotatingStarExample().run();
	//jm::PrimitivesGallery().init("Primitive Gallery", 1280, 960, false).run();
	//jm::SolarSystem().run();
	//jm::FaceExample().run();
	//jm::WalkingPerson().run();
	//jm::TankExample().run();

	return 0;
}
