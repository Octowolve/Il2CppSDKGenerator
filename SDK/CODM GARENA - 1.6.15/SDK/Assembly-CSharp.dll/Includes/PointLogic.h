#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PointLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PointLogic"));
	}

	template <typename T = int32_t> T& hitGetPoint() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& hitGetPointUpperLimit() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& normalKillPoint() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& weakpointKillPoint() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& meleeKillPoint() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
