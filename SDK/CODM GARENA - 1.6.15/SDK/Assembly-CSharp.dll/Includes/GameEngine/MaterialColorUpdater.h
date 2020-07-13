#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MaterialColorUpdater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MaterialColorUpdater"));
	}

	template <typename T = uintptr_t> T& m_StartColorValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_EndColorValue() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_CurColorValue() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitConfigFromWrapper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleMaterialUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T InitConfigFromWrapper(uintptr_t wrapper) {
		return ((T (*)(MaterialColorUpdater*, uintptr_t))(Il2CppBase() + 0x4AAC438))(this, wrapper);
	}
	template <typename T = void> T HandleMaterialUpdate() {
		return ((T (*)(MaterialColorUpdater*))(Il2CppBase() + 0x4AAC5F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitConfigFromWrapper(uintptr_t P0) {
		return ((T (*)(MaterialColorUpdater*, uintptr_t))(Il2CppBase() + 0x4AAC830))(this, P0);
	}

};

}
