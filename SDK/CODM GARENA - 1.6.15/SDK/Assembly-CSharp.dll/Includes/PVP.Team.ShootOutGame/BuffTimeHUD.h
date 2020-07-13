#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.ShootOutGame {

class BuffTimeHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.ShootOutGame", "BuffTimeHUD"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& bufferItemList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Table() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_usedBuffNum() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_buffIdToItemDic() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_CachedTransform() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBuffAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBuffDelete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBuffModify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBuffItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_CachedTransform() {
		return ((T (*)(BuffTimeHUD*))(Il2CppBase() + 0x34BEA10))(this);
	}
	template <typename T = void> T OnNotifyBuffAdd(uintptr_t Msg, uintptr_t pickupConf) {
		return ((T (*)(BuffTimeHUD*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34BEAE0))(this, Msg, pickupConf);
	}
	template <typename T = void> T OnNotifyBuffDelete(uintptr_t Msg) {
		return ((T (*)(BuffTimeHUD*, uintptr_t))(Il2CppBase() + 0x34BF2B0))(this, Msg);
	}
	template <typename T = void> T OnNotifyBuffModify(uintptr_t Msg) {
		return ((T (*)(BuffTimeHUD*, uintptr_t))(Il2CppBase() + 0x34BF580))(this, Msg);
	}
	template <typename T = uintptr_t> T GetBuffItem() {
		return ((T (*)(BuffTimeHUD*))(Il2CppBase() + 0x34BED88))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BuffTimeHUD*))(Il2CppBase() + 0x34BF7BC))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BuffTimeHUD*))(Il2CppBase() + 0x34BF7C4))(this);
	}

};

}
