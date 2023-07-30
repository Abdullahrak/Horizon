#pragma once

#ifdef HZ_PLATFORM_WINDOWS
#ifdef HZ_BUILD_DLL

#define HORIZON_API _declspec(dllexport)
#else 
#define HORIZON_API _declspec(dllimport)
#endif 
#else 
#error Horizon only supports windows

#endif
