#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RenderStateEnableKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RenderStateEnableKey"));
	}

	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& AssetID() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(RenderStateEnableKey*, uintptr_t))(Il2CppBase() + 0x412E468))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(RenderStateEnableKey*, uintptr_t))(Il2CppBase() + 0x412E584))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RenderStateEnableKey*))(Il2CppBase() + 0x412E6BC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(RenderStateEnableKey*, uintptr_t))(Il2CppBase() + 0x412E77C))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetHashCode() {
		return ((T (*)(RenderStateEnableKey*))(Il2CppBase() + 0x412E834))(this);
	}

};

}
