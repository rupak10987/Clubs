#pragma once
#ifdef CLB_PLATFORM_WINDOWS
#ifdef CLB_BUILD_DLL
#define CLUB_API _declspec(dllexport)
#else 
#define CLUB_API _declspec(dllimport)
#endif // CLB_BUILD_DLL
#else
#error u suck if u aint using windows!
#endif // CLB_PLATFORM_WINDOWS
