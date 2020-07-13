#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutTimePvpGameController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutTimePvpGameController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowLoadoutTimePvpGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOutNotifyPrepareTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutTimePvpGameController*))(Il2CppBase() + 0x1F48830))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutTimePvpGameController*))(Il2CppBase() + 0x1F488D4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutTimePvpGameController*))(Il2CppBase() + 0x1F489E0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutTimePvpGameController*))(Il2CppBase() + 0x1F48B08))(this);
	}
	template <typename T = void> T OnNotifyShowLoadoutTimePvpGameView(uintptr_t message) {
		return ((T (*)(LoadoutTimePvpGameController*, uintptr_t))(Il2CppBase() + 0x1F48BC4))(this, message);
	}
	template <typename T = void> T OnOutNotifyPrepareTime(uintptr_t msg) {
		return ((T (*)(LoadoutTimePvpGameController*, uintptr_t))(Il2CppBase() + 0x1F492C8))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutTimePvpGameController*))(Il2CppBase() + 0x1F49478))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutTimePvpGameController*))(Il2CppBase() + 0x1F49480))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutTimePvpGameController*))(Il2CppBase() + 0x1F49488))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutTimePvpGameController*))(Il2CppBase() + 0x1F49490))(this);
	}

};

}
