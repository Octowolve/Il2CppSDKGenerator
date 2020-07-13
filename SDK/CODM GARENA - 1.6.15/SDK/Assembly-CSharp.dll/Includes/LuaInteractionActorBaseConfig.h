#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuaInteractionActorBaseConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuaInteractionActorBaseConfig"));
	}

	template <typename T = uintptr_t> T& interactionType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& triggerRadius() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& useOuterLine() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& outerLineColor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLuaExportProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T GetLuaExportProperty(uintptr_t propertyList) {
		return ((T (*)(LuaInteractionActorBaseConfig*, uintptr_t))(Il2CppBase() + 0x43531DC))(this, propertyList);
	}
	template <typename T = void> T xLuaBaseProxy_GetLuaExportProperty(uintptr_t P0) {
		return ((T (*)(LuaInteractionActorBaseConfig*, uintptr_t))(Il2CppBase() + 0x4353304))(this, P0);
	}

};

}
