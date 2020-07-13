#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AdManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdManager"));
	}

	template <typename T = uintptr_t> T& m_ShowAdCallBack() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& adAvailable() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& changeState() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = bool> T& needRewardCallback() {
		return *(T*)((uintptr_t)this + 0xF);
	}
	template <typename T = bool> T& showAdSuccess() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ironSourcePlacement() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& serverParams() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateIronSrc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AdManager*, float))(Il2CppBase() + 0x4A18A1C))(this, deltaTime);
	}
	template <typename T = void> T OnLogin() {
		return ((T (*)(AdManager*))(Il2CppBase() + 0x4A18CAC))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pause) {
		return ((T (*)(AdManager*, bool))(Il2CppBase() + 0x4A18D44))(this, pause);
	}
	template <typename T = void> T ValidateIronSrc() {
		return ((T (*)(AdManager*))(Il2CppBase() + 0x4A18DE4))(this);
	}
	template <typename T = bool> T ShowAD(uintptr_t callBack, Il2CppString* placementName) {
		return ((T (*)(AdManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4A18E7C))(this, callBack, placementName);
	}
	template <typename T = bool> T AdAvailable() {
		return ((T (*)(AdManager*))(Il2CppBase() + 0x4A18F3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AdManager*, float))(Il2CppBase() + 0x4A1905C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(AdManager*, bool))(Il2CppBase() + 0x4A19064))(this, P0);
	}

};

}
