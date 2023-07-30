
#include "C:\dev\Horizon\src\Horizon.h">

// we have skeleton class Apllication and we want to run it 
// client side 
class Sandbox : public Horizon::Application 
{
public:
	Sandbox() //constructor 
	{

		 
	}

	~Sandbox() //destructor
	{

	}
};

Horizon::Application* Horizon::CreateApplication()
{
	return new Sandbox();
}