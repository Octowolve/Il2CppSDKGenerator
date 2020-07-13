#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIDragEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIDragEffect"));
	}

	template <typename T = uintptr_t> T& m_Camera() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ParticleFx() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsEffectActive() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCustomInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIDragEffect*))(Il2CppBase() + 0x39D9064))(this);
	}
	template <typename T = void> T UpdateEffect(Il2CppVector2 posInScreenSpace) {
		return ((T (*)(UIDragEffect*, Il2CppVector2))(Il2CppBase() + 0x39D92F8))(this, posInScreenSpace);
	}
	template <typename T = void> T StartEffect(Il2CppVector2 posInScreenSpace) {
		return ((T (*)(UIDragEffect*, Il2CppVector2))(Il2CppBase() + 0x39D946C))(this, posInScreenSpace);
	}
	template <typename T = void> T StopEffect() {
		return ((T (*)(UIDragEffect*))(Il2CppBase() + 0x39D9590))(this);
	}
	template <typename T = void> T OnCustomInput() {
		return ((T (*)(UIDragEffect*))(Il2CppBase() + 0x39D9698))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIDragEffect*))(Il2CppBase() + 0x39D97FC))(this);
	}

};

}
