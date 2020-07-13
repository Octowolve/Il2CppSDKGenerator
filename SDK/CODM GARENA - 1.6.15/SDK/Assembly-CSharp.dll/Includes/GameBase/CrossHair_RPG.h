#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CrossHairRPG
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CrossHair_RPG"));
	}

	template <typename T = uintptr_t> T& StartLock() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Enemy() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& Widget() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_CurLockTarget() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_PrologueCrossHairStatus() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CrossHairRPG*))(Il2CppBase() + 0x40CFE8C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CrossHairRPG*, float))(Il2CppBase() + 0x40CFE94))(this, dt);
	}
	template <typename T = void> T UpdateTransform(Il2CppVector3 pos, bool isLock) {
		return ((T (*)(CrossHairRPG*, Il2CppVector3, bool))(Il2CppBase() + 0x40D0450))(this, pos, isLock);
	}
	template <typename T = uintptr_t> T get_PrologueCrossHairStatus() {
		return ((T (*)(CrossHairRPG*))(Il2CppBase() + 0x40D0870))(this);
	}
	template <typename T = void> T set_PrologueCrossHairStatus(uintptr_t value) {
		return ((T (*)(CrossHairRPG*, uintptr_t))(Il2CppBase() + 0x40D0878))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CrossHairRPG*))(Il2CppBase() + 0x40D09DC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CrossHairRPG*))(Il2CppBase() + 0x40D0AAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CrossHairRPG*, float))(Il2CppBase() + 0x40D0B60))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(CrossHairRPG*))(Il2CppBase() + 0x40D0B68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(CrossHairRPG*))(Il2CppBase() + 0x40D0B70))(this);
	}

};

}
