#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEPlayerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEPlayerController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPropInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddStandaloneBagInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerBagDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllowAimAssitance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFreezing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T ProcessPropInfo() {
		return ((T (*)(PVEPlayerController*))(Il2CppBase() + 0x4394B44))(this);
	}
	template <typename T = void> T AddStandaloneBagInfo(uintptr_t bagInfoList) {
		return ((T (*)(PVEPlayerController*, uintptr_t))(Il2CppBase() + 0x43952C0))(this, bagInfoList);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T GetPlayerBagDic() {
		return ((T (*)(PVEPlayerController*))(Il2CppBase() + 0x43959E8))(this);
	}
	template <typename T = bool> T AllowAimAssitance() {
		return ((T (*)(PVEPlayerController*))(Il2CppBase() + 0x4395AE8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PVEPlayerController*, float))(Il2CppBase() + 0x4395C4C))(this, deltaTime);
	}
	template <typename T = void> T GiveWeapon(uintptr_t weaponName, bool autoSwitch, int32_t ammoCount, uintptr_t slot) {
		return ((T (*)(PVEPlayerController*, uintptr_t, bool, int32_t, uintptr_t))(Il2CppBase() + 0x4395FD0))(this, weaponName, autoSwitch, ammoCount, slot);
	}
	template <typename T = void> T RemoveGrenade(uintptr_t weaponName) {
		return ((T (*)(PVEPlayerController*, uintptr_t))(Il2CppBase() + 0x4396728))(this, weaponName);
	}
	template <typename T = bool> T IsFreezing() {
		return ((T (*)(PVEPlayerController*))(Il2CppBase() + 0x43969A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessPropInfo() {
		return ((T (*)(PVEPlayerController*))(Il2CppBase() + 0x4396A6C))(this);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T xLuaBaseProxy_GetPlayerBagDic() {
		return ((T (*)(PVEPlayerController*))(Il2CppBase() + 0x4396A74))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_AllowAimAssitance() {
		return ((T (*)(PVEPlayerController*))(Il2CppBase() + 0x4396A7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PVEPlayerController*, float))(Il2CppBase() + 0x4396A84))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsFreezing() {
		return ((T (*)(PVEPlayerController*))(Il2CppBase() + 0x4396A8C))(this);
	}

};

}
