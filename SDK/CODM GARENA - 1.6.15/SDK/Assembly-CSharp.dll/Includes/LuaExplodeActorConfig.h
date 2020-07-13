#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuaExplodeActorConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuaExplodeActorConfig"));
	}

	template <typename T = float> T& ExplodeDamageRadius() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& ExplodeAttenuationRadius() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& MaxDamageValueToPlayer() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& MinDamageValueToPlayer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& MaxDamageValueToZombie() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& MinDamageValueToZombie() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLuaExportProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T GetLuaExportProperty(uintptr_t propertyList) {
		return ((T (*)(LuaExplodeActorConfig*, uintptr_t))(Il2CppBase() + 0x4351E94))(this, propertyList);
	}
	template <typename T = void> T xLuaBaseProxy_GetLuaExportProperty(uintptr_t P0) {
		return ((T (*)(LuaExplodeActorConfig*, uintptr_t))(Il2CppBase() + 0x4352644))(this, P0);
	}

};

}
