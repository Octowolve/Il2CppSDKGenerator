#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PropHuntSpot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PropHuntSpot"));
	}

	template <typename T = int32_t> T& GroupID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& SpotID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> static T& DefaultLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PropHuntSpot*))(Il2CppBase() + 0x4CDE2EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PropHuntSpot*))(Il2CppBase() + 0x4CDE3F8))(this);
	}

};

}
