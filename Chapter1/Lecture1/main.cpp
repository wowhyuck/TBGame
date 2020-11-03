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
			beginTransformation();
			translate(0.1f, 0.0f);
			const vec2 p0(0.0f, 0.0f);
			const vec2 p1(0.5f, 0.5f);
			const vec2 p2(0.5f, 0.0f);

			drawLine(Colors::red, p0, Colors::blue, p1);
			drawLine(Colors::red, p1, Colors::blue, p2);
			drawLine(Colors::red, p2, Colors::blue, p0);

			endTransformation();

			translate(-0.1f, 0.0f);

			drawLine(Colors::red, p0, Colors::blue, p1);
			drawLine(Colors::red, p1, Colors::blue, p2);
			drawLine(Colors::red, p2, Colors::blue, p0);
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
