#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MaterialVectorUpdater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MaterialVectorUpdater"));
	}

	template <typename T = uintptr_t> T& m_StartVector4Value() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_EndVector4Value() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_CurVector4Value() {
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
		return ((T (*)(MaterialVectorUpdater*, uintptr_t))(Il2CppBase() + 0x4AAD628))(this, wrapper);
	}
	template <typename T = void> T HandleMaterialUpdate() {
		return ((T (*)(MaterialVectorUpdater*))(Il2CppBase() + 0x4AAD70C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitConfigFromWrapper(uintptr_t P0) {
		return ((T (*)(MaterialVectorUpdater*, uintptr_t))(Il2CppBase() + 0x4AAD944))(this, P0);
	}

};

}
