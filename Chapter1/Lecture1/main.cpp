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
	public:
		void update() override
		{
			setLineWidth(3.0f);
			
			const vec2 center_of_rot(-0.4f, 0.0f);

			translate(center_of_rot);
			rotate(45.0f);
			translate(-center_of_rot);
			
			drawWiredBox(Colors::gold, 0.5f, 0.25f);
			drawPoint(Colors::black, center_of_rot, 5.0f);	
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
