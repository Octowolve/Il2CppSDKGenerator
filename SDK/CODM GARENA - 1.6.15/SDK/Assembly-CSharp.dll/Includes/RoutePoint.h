#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoutePoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoutePoint"));
	}

	template <typename T = Il2CppVector3> T& point() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsInflection() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
