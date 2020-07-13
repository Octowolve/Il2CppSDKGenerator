#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WarningHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WarningHud"));
	}

	template <typename T = uintptr_t> T& m_EnemyLockWidget() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_EnemyComingWidget() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_LockTargetList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_ProjectileComingList() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_isVTOLExplode() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLockTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMissileComing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMissileExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVTOLDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(WarningHud*))(Il2CppBase() + 0x1BF926C))(this);
	}
	template <typename T = void> T OnLockTarget(uintptr_t msg) {
		return ((T (*)(WarningHud*, uintptr_t))(Il2CppBase() + 0x1BF99FC))(this, msg);
	}
	template <typename T = void> T OnMissileComing(uintptr_t msg) {
		return ((T (*)(WarningHud*, uintptr_t))(Il2CppBase() + 0x1BFA350))(this, msg);
	}
	template <typename T = void> T OnMissileExplode(uintptr_t msg) {
		return ((T (*)(WarningHud*, uintptr_t))(Il2CppBase() + 0x1BFA890))(this, msg);
	}
	template <typename T = void> T OnVTOLDead(uintptr_t msg) {
		return ((T (*)(WarningHud*, uintptr_t))(Il2CppBase() + 0x1BFABA0))(this, msg);
	}
	template <typename T = void> T UpdateChange() {
		return ((T (*)(WarningHud*))(Il2CppBase() + 0x1BF94A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(WarningHud*))(Il2CppBase() + 0x1BFACB8))(this);
	}

};

}
