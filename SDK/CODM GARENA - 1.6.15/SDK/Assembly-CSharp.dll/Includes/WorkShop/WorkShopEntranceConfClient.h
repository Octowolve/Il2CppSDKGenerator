#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WorkShop {

class WorkShopEntranceConfClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WorkShop", "WorkShopEntranceConfClient"));
	}

	template <typename T = uintptr_t> T& confServer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& bWeaponBuff() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bPlayerBuff() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uint32_t> T& modeId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& matchServiceModule() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeInfoByServerTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetModeId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T IsValid(int32_t serverTime) {
		return ((T (*)(WorkShopEntranceConfClient*, int32_t))(Il2CppBase() + 0xC11074))(this, serverTime);
	}
	template <typename T = void> T ComputeInfoByServerTime(uintptr_t spvpDS, uintptr_t brDS, uintptr_t zombieDS, uintptr_t lobbyExpBuffDS, int32_t serverTime) {
		return ((T (*)(WorkShopEntranceConfClient*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0xC12048))(this, spvpDS, brDS, zombieDS, lobbyExpBuffDS, serverTime);
	}
	template <typename T = void> T _SetModeId(uintptr_t spvpDS, uintptr_t brDS, uintptr_t zombieDS, uint32_t playlistId, uint32_t instanceId) {
		return ((T (*)(WorkShopEntranceConfClient*, uintptr_t, uintptr_t, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0xC130E4))(this, spvpDS, brDS, zombieDS, playlistId, instanceId);
	}

};

}
