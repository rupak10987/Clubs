#pragma once
#ifdef CLB_PLATFORM_WINDOWS
extern Clubs::App* Clubs::CreateApp();
int main(int argc, char** argv)
{
	printf("WelcomeTo Clubs Engine \n");
	auto apps = Clubs::CreateApp();
	apps->Run();
	delete apps;
}
#endif // CLB_PLATFORM_WINDOWS
