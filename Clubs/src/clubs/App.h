#pragma once
#include"core.h"
#include<stdio.h>
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


