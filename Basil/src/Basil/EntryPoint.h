#pragma once

#ifdef BZ_PLATFORM_WINDOWS

extern Basil::Application* Basil::CreateApplication();

int main(int agrc, char** argv)
{
	auto app = Basil::CreateApplication();
	app->Run();
	delete app;
}
#else
#error Basil only supports Windows mate!
#endif
