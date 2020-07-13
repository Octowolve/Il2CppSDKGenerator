#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FPAnimationSyncController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FPAnimationSyncController"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& CachedTransforms() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_CurrentWeapon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IsInit() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAttach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnAttach(uintptr_t weapon) {
		return ((T (*)(FPAnimationSyncController*, uintptr_t))(Il2CppBase() + 0x31E8034))(this, weapon);
	}
	template <typename T = void> T OnDetach() {
		return ((T (*)(FPAnimationSyncController*))(Il2CppBase() + 0x31E837C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(FPAnimationSyncController*))(Il2CppBase() + 0x31E8420))(this);
	}

};

}
