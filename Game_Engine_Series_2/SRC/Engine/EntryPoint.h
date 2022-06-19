#pragma once

#include "algum_arquivo_teste.cpp"

#ifdef ENG_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
	algo();
	printf("started running\n");
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}

#endif
