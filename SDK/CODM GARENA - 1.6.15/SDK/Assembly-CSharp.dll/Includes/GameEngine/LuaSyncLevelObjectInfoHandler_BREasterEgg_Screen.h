#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LuaSyncLevelObjectInfoHandlerBREasterEggScreen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LuaSyncLevelObjectInfoHandler_BREasterEgg_Screen"));
	}

	template <typename T = uint32_t> T& m_CurAnimationState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnSyncProperty(uint32_t propertyID, uint32_t value) {
		return ((T (*)(LuaSyncLevelObjectInfoHandlerBREasterEggScreen*, uint32_t, uint32_t))(Il2CppBase() + 0x4A98A74))(this, propertyID, value);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncProperty(uint32_t P0, uint32_t P1) {
		return ((T (*)(LuaSyncLevelObjectInfoHandlerBREasterEggScreen*, uint32_t, uint32_t))(Il2CppBase() + 0x4A98C34))(this, P0, P1);
	}

};

}
