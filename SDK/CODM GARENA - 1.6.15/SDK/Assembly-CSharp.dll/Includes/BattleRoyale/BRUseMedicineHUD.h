#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRUseMedicineHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRUseMedicineHUD"));
	}

	template <typename T = uintptr_t> T& InterruptBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& MedicineSprite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ProgressBar() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& TimeLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_MedicineConfig() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_TotalTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& HUD_StrTranslated() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadCancelMedicine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInterruptBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUseMedicineInterrupt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRUseMedicineHUD*))(Il2CppBase() + 0x2647918))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(BRUseMedicineHUD*))(Il2CppBase() + 0x2647920))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRUseMedicineHUD*))(Il2CppBase() + 0x264792C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRUseMedicineHUD*))(Il2CppBase() + 0x264793C))(this);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(BRUseMedicineHUD*))(Il2CppBase() + 0x2647AB0))(this);
	}
	template <typename T = bool> T OnGamepadCancelMedicine() {
		return ((T (*)(BRUseMedicineHUD*))(Il2CppBase() + 0x2647B48))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRUseMedicineHUD*))(Il2CppBase() + 0x2647CDC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRUseMedicineHUD*))(Il2CppBase() + 0x2647E84))(this);
	}
	template <typename T = void> T OnInterruptBtnClick() {
		return ((T (*)(BRUseMedicineHUD*))(Il2CppBase() + 0x2647C10))(this);
	}
	template <typename T = void> T Show(int32_t itemId) {
		return ((T (*)(BRUseMedicineHUD*, int32_t))(Il2CppBase() + 0x264808C))(this, itemId);
	}
	template <typename T = void> T UnShow() {
		return ((T (*)(BRUseMedicineHUD*))(Il2CppBase() + 0x2647FE0))(this);
	}
	template <typename T = void> T OnNotifyUseMedicineInterrupt(uintptr_t msg) {
		return ((T (*)(BRUseMedicineHUD*, uintptr_t))(Il2CppBase() + 0x2648908))(this, msg);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRUseMedicineHUD*))(Il2CppBase() + 0x26489B4))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRUseMedicineHUD*, float))(Il2CppBase() + 0x26489BC))(this, dt);
	}
	template <typename T = void> T Showm__0() {
		return ((T (*)(BRUseMedicineHUD*))(Il2CppBase() + 0x2648BFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRUseMedicineHUD*))(Il2CppBase() + 0x2648C1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(BRUseMedicineHUD*))(Il2CppBase() + 0x2648C24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRUseMedicineHUD*))(Il2CppBase() + 0x2648C2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRUseMedicineHUD*))(Il2CppBase() + 0x2648C34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRUseMedicineHUD*, float))(Il2CppBase() + 0x2648C3C))(this, P0);
	}

};

}
