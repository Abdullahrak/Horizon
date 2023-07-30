#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Horizon::Application* Horizon::CreateApplication();

int main(int argc, char** argv) // this will create our application by calling  this function Horizon::Application* CreateApplication()

{
	
	auto app = Horizon::CreateApplication();
	app->Run();
	delete app;


}
#endif