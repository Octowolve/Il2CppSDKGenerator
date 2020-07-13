#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassExpAwardAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassExpAwardAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ExpProp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_BeforeLv() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_BeforeExp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IsCaching() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_FinalLv() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_FinalExp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& bBlockAwardUI() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCacheFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFinalLvExp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBattlePassExpProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBattlePassExpPropShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetBlockAwardUIFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBlockAwardUIFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T ResetData() {
		return ((T (*)(BattlePassExpAwardAssist*))(Il2CppBase() + 0x32875D8))(this);
	}
	template <typename T = bool> T get_IsCaching() {
		return ((T (*)(BattlePassExpAwardAssist*))(Il2CppBase() + 0x3286FC8))(this);
	}
	template <typename T = void> T SetCacheFlag() {
		return ((T (*)(BattlePassExpAwardAssist*))(Il2CppBase() + 0x325AB30))(this);
	}
	template <typename T = void> T SetFinalLvExp(int32_t lv, int32_t exp) {
		return ((T (*)(BattlePassExpAwardAssist*, int32_t, int32_t))(Il2CppBase() + 0x325AC9C))(this, lv, exp);
	}
	template <typename T = void> T AddBattlePassExpProp(uintptr_t exp) {
		return ((T (*)(BattlePassExpAwardAssist*, uintptr_t))(Il2CppBase() + 0x328A6C4))(this, exp);
	}
	template <typename T = void> T CheckBattlePassExpPropShow(bool bShowBPUI) {
		return ((T (*)(BattlePassExpAwardAssist*, bool))(Il2CppBase() + 0x328A7DC))(this, bShowBPUI);
	}
	template <typename T = void> T ResetBlockAwardUIFlag() {
		return ((T (*)(BattlePassExpAwardAssist*))(Il2CppBase() + 0x32876F4))(this);
	}
	template <typename T = bool> T GetBlockAwardUIFlag() {
		return ((T (*)(BattlePassExpAwardAssist*))(Il2CppBase() + 0x3264CA4))(this);
	}

};

}
