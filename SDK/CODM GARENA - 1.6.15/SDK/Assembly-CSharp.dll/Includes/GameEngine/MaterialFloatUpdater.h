#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MaterialFloatUpdater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MaterialFloatUpdater"));
	}

	template <typename T = float> T& m_StartFloatValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_EndFloatValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_CurFloatValue() {
		return *(T*)((uintptr_t)this + 0x30);
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
		return ((T (*)(MaterialFloatUpdater*, uintptr_t))(Il2CppBase() + 0x4AAC980))(this, wrapper);
	}
	template <typename T = void> T HandleMaterialUpdate() {
		return ((T (*)(MaterialFloatUpdater*))(Il2CppBase() + 0x4AACA50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitConfigFromWrapper(uintptr_t P0) {
		return ((T (*)(MaterialFloatUpdater*, uintptr_t))(Il2CppBase() + 0x4AACC78))(this, P0);
	}

};

}
