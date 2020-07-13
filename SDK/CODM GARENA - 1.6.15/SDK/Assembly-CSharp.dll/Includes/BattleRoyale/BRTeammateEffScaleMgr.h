#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeammateEffScaleMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeammateEffScaleMgr"));
	}

	template <typename T = float> T& m_BaseScale() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_CheckLocalPawnState() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsLocalPawnStartFly() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = float> T& m_ScaleLerpEndTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_ReviveScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_ReviveScaleLerpTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = float> T get_BaseScale() {
		return ((T (*)(BRTeammateEffScaleMgr*))(Il2CppBase() + 0x2631790))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRTeammateEffScaleMgr*, float))(Il2CppBase() + 0x2631854))(this, deltaTime);
	}
	template <typename T = void> T OnLocalPlayerDead() {
		return ((T (*)(BRTeammateEffScaleMgr*))(Il2CppBase() + 0x2631B14))(this);
	}
	template <typename T = void> T EndScale() {
		return ((T (*)(BRTeammateEffScaleMgr*))(Il2CppBase() + 0x2631A64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRTeammateEffScaleMgr*, float))(Il2CppBase() + 0x2631BC8))(this, P0);
	}

};

}
