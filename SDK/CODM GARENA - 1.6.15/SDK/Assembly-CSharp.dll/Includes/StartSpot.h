#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartSpot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartSpot"));
	}

	template <typename T = bool> T& m_Available() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_SupportInitialSpawn() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> T& m_Camp() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_IsTutorialPoint() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = unsigned char> T& m_Group() {
		return *(T*)((uintptr_t)this + 0x31);
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
		return ((T (*)(StartSpot*))(Il2CppBase() + 0x395003C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(StartSpot*))(Il2CppBase() + 0x3950148))(this);
	}

};

}
