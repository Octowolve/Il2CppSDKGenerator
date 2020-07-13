#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BaseEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BaseEffect"));
	}

	template <typename T = uintptr_t> T& m_TrailRenderer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_IsFirstInit() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FirstInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T InitResource() {
		return ((T (*)(BaseEffect*))(Il2CppBase() + 0x360C1D0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BaseEffect*))(Il2CppBase() + 0x360C268))(this);
	}
	template <typename T = void> T FirstInit() {
		return ((T (*)(BaseEffect*))(Il2CppBase() + 0x360C32C))(this);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(BaseEffect*))(Il2CppBase() + 0x360C40C))(this);
	}
	template <typename T = void> T PlayEffect_1(Il2CppVector3 pos, Il2CppQuaternion rot) {
		return ((T (*)(BaseEffect*, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x360C53C))(this, pos, rot);
	}
	template <typename T = void> T StopEffect() {
		return ((T (*)(BaseEffect*))(Il2CppBase() + 0x360C698))(this);
	}
	template <typename T = void> T SetEffectActive(bool active) {
		return ((T (*)(BaseEffect*, bool))(Il2CppBase() + 0x360C760))(this, active);
	}
	template <typename T = void> T DestroyEffect() {
		return ((T (*)(BaseEffect*))(Il2CppBase() + 0x360C82C))(this);
	}
	template <typename T = bool> T IsShowing() {
		return ((T (*)(BaseEffect*))(Il2CppBase() + 0x360C8E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BaseEffect*))(Il2CppBase() + 0x360C9AC))(this);
	}

};

}
