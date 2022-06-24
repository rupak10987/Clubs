#include"Clubs.h"

class Sandbox :public Clubs::App
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};
Clubs::App* Clubs::CreateApp()
{
	return new Sandbox();
}