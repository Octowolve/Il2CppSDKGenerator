#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuaFunctionalActorConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuaFunctionalActorConfig"));
	}

	template <typename T = uintptr_t> T& funcType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& model() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& spawnSoundEvent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& destroySoundEvent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLuaExportProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T GetLuaExportProperty(uintptr_t propertyList) {
		return ((T (*)(LuaFunctionalActorConfig*, uintptr_t))(Il2CppBase() + 0x4352914))(this, propertyList);
	}
	template <typename T = void> T xLuaBaseProxy_GetLuaExportProperty(uintptr_t P0) {
		return ((T (*)(LuaFunctionalActorConfig*, uintptr_t))(Il2CppBase() + 0x43529B4))(this, P0);
	}

};

}
