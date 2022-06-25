#pragma once

#ifdef ENG_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
	Engine::Log::Init();
	ENG_CORE_ERROR("initialized successefuly!");
	int a = 15;
	ENG_INFO("initialized successefuly! Var={1}", a, 4);

	printf("started running\n");
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}

#endif
