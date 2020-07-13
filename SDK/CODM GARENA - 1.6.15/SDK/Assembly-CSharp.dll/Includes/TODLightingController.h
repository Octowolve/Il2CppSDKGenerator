#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TODLightingController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TODLightingController"));
	}

	template <typename T = uintptr_t> T& m_Shadowmask() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TODLightingController*))(Il2CppBase() + 0x4966A58))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(TODLightingController*))(Il2CppBase() + 0x4966BE4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TODLightingController*))(Il2CppBase() + 0x4966D14))(this);
	}

};

}
