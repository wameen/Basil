#pragma once

#ifdef BZ_PLATFORM_WINDOWS
	#ifdef BZ_BUILD_DLL
		#define BASIL_API __declspec(dllexport)
	#else
		#define BASIL_API __declspec(dllimport)
	#endif
#else
	#error Basil onlu supports Windows!
#endif
