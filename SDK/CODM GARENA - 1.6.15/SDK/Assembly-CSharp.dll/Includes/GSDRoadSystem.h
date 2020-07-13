#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GSDRoadSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GSDRoadSystem"));
	}

	template <typename T = Il2CppString*> static T& BaseAssetPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
