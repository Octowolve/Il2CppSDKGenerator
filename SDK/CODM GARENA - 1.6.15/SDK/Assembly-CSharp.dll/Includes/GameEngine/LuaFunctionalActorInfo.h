#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LuaFunctionalActorInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LuaFunctionalActorInfo"));
	}

	template <typename T = uint32_t> T& LuaFuncationActorAniState() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnSyncProperty(uint32_t propertyID, uint32_t value) {
		return ((T (*)(LuaFunctionalActorInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x4A8FBF8))(this, propertyID, value);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncProperty(uint32_t P0, uint32_t P1) {
		return ((T (*)(LuaFunctionalActorInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x4A8FFA8))(this, P0, P1);
	}

};

}
