#pragma once
#include"core.h"
namespace Clubs
{
	class CLUB_API App
	{
	public:
		App();
		virtual ~App();
		void Run();
	};
	// to be defined in others
	App* CreateApp();
	
}


