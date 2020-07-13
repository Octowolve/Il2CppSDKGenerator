#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponSoundBankManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponSoundBankManager"));
	}

	template <typename T = bool> T& m_IsLowMemoryDevice() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_BankDictionary() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Delay_To_Unload_Time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Max_Fail_Time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& bankToRemove() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& uselessBankName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HotfixLoadBankMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBankAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBankSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLoadBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLoadAllBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AsyncLoadCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Init() {
		return ((T (*)(WeaponSoundBankManager*))(Il2CppBase() + 0x33B9580))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponSoundBankManager*, float))(Il2CppBase() + 0x33B9670))(this, deltaTime);
	}
	template <typename T = bool> T HotfixLoadBankMethod() {
		return ((T (*)(WeaponSoundBankManager*))(Il2CppBase() + 0x33B9B5C))(this);
	}
	template <typename T = void> T LoadBank(Il2CppString* bankName) {
		return ((T (*)(WeaponSoundBankManager*, Il2CppString*))(Il2CppBase() + 0x33B9BFC))(this, bankName);
	}
	template <typename T = void> T LoadBankAsync(Il2CppString* bankName) {
		return ((T (*)(WeaponSoundBankManager*, Il2CppString*))(Il2CppBase() + 0x33B9DC0))(this, bankName);
	}
	template <typename T = void> T LoadBankSync(Il2CppString* bankName) {
		return ((T (*)(WeaponSoundBankManager*, Il2CppString*))(Il2CppBase() + 0x33BA100))(this, bankName);
	}
	template <typename T = void> T UnLoadBank(Il2CppString* bankName) {
		return ((T (*)(WeaponSoundBankManager*, Il2CppString*))(Il2CppBase() + 0x33BA3AC))(this, bankName);
	}
	template <typename T = void> T UnLoadAllBank() {
		return ((T (*)(WeaponSoundBankManager*))(Il2CppBase() + 0x33BA5A8))(this);
	}
	template <typename T = void> T OnExitMatch() {
		return ((T (*)(WeaponSoundBankManager*))(Il2CppBase() + 0x33BA834))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WeaponSoundBankManager*))(Il2CppBase() + 0x33BA8E4))(this);
	}
	template <typename T = void> T OnEndMatch() {
		return ((T (*)(WeaponSoundBankManager*))(Il2CppBase() + 0x33BA994))(this);
	}
	template <typename T = void> T AsyncLoadCallBack(bool isSuccess, Il2CppString* bankName) {
		return ((T (*)(WeaponSoundBankManager*, bool, Il2CppString*))(Il2CppBase() + 0x33BAA44))(this, isSuccess, bankName);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(WeaponSoundBankManager*))(Il2CppBase() + 0x33BACB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSoundBankManager*, float))(Il2CppBase() + 0x33BACBC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnExitMatch() {
		return ((T (*)(WeaponSoundBankManager*))(Il2CppBase() + 0x33BACC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(WeaponSoundBankManager*))(Il2CppBase() + 0x33BACCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEndMatch() {
		return ((T (*)(WeaponSoundBankManager*))(Il2CppBase() + 0x33BACD4))(this);
	}

};

}
