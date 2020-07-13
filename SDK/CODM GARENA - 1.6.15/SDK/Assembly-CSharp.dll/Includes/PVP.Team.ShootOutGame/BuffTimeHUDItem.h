#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.ShootOutGame {

class BuffTimeHUDItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.ShootOutGame", "BuffTimeHUDItem"));
	}

	template <typename T = uintptr_t> T& buffSprite() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& bgSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_buffDuration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_buffStartTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_buffActive() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBuffAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBuffBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBuffDelete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBuffModify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnNotifyBuffAdd(uintptr_t info, uintptr_t pickupConf) {
		return ((T (*)(BuffTimeHUDItem*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34BF02C))(this, info, pickupConf);
	}
	template <typename T = void> T UpdateBuffBar() {
		return ((T (*)(BuffTimeHUDItem*))(Il2CppBase() + 0x34BF878))(this);
	}
	template <typename T = void> T OnNotifyBuffDelete(uintptr_t info) {
		return ((T (*)(BuffTimeHUDItem*, uintptr_t))(Il2CppBase() + 0x34BF424))(this, info);
	}
	template <typename T = void> T OnNotifyBuffModify(uintptr_t info) {
		return ((T (*)(BuffTimeHUDItem*, uintptr_t))(Il2CppBase() + 0x34BF6A4))(this, info);
	}

};

}
