#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HelicopterResourceManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HelicopterResourceManager"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& colliders() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(HelicopterResourceManager*))(Il2CppBase() + 0x474EBC8))(this);
	}
	template <typename T = void> T ResetResource() {
		return ((T (*)(HelicopterResourceManager*))(Il2CppBase() + 0x474EC98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(HelicopterResourceManager*))(Il2CppBase() + 0x474EF90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetResource() {
		return ((T (*)(HelicopterResourceManager*))(Il2CppBase() + 0x474EF98))(this);
	}

};

}
