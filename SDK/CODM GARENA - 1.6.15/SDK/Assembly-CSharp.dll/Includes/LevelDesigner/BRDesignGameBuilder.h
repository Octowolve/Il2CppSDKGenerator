#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LevelDesigner {

class BRDesignGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LevelDesigner", "BRDesignGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init1PPawnActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init3PPawnActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(BRDesignGameBuilder*))(Il2CppBase() + 0x49304AC))(this);
	}
	template <typename T = void> T Init1PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(BRDesignGameBuilder*, uintptr_t))(Il2CppBase() + 0x4930568))(this, actorInfo);
	}
	template <typename T = void> T Init3PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(BRDesignGameBuilder*, uintptr_t))(Il2CppBase() + 0x4930654))(this, actorInfo);
	}
	template <typename T = void> T xLuaBaseProxy_Init1PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(BRDesignGameBuilder*, uintptr_t))(Il2CppBase() + 0x4930740))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init3PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(BRDesignGameBuilder*, uintptr_t))(Il2CppBase() + 0x4930748))(this, P0);
	}

};

}
