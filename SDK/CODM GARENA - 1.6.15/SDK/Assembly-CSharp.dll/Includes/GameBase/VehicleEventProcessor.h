#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VehicleEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VehicleEventProcessor"));
	}

	template <typename T = uintptr_t> T& vehicle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigNetSyncModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventAfterPawnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventBeforePawnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncVehicleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T ConfigNetSyncModuleList() {
		return ((T (*)(VehicleEventProcessor*))(Il2CppBase() + 0x27DEA48))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(VehicleEventProcessor*))(Il2CppBase() + 0x27DEB74))(this);
	}
	template <typename T = void> T RegisterEventAfterPawnStart() {
		return ((T (*)(VehicleEventProcessor*))(Il2CppBase() + 0x27DED1C))(this);
	}
	template <typename T = void> T RegisterEventBeforePawnStart() {
		return ((T (*)(VehicleEventProcessor*))(Il2CppBase() + 0x27DEDB4))(this);
	}
	template <typename T = void> T OnDoDamage(uintptr_t Msg) {
		return ((T (*)(VehicleEventProcessor*, uintptr_t))(Il2CppBase() + 0x27DEE4C))(this, Msg);
	}
	template <typename T = void> T OnSyncDead(uintptr_t Msg) {
		return ((T (*)(VehicleEventProcessor*, uintptr_t))(Il2CppBase() + 0x27DF070))(this, Msg);
	}
	template <typename T = void> T OnSyncVehicleInfo(uintptr_t Msg) {
		return ((T (*)(VehicleEventProcessor*, uintptr_t))(Il2CppBase() + 0x27DF3E8))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigNetSyncModuleList() {
		return ((T (*)(VehicleEventProcessor*))(Il2CppBase() + 0x27DF56C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(VehicleEventProcessor*))(Il2CppBase() + 0x27DF574))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEventAfterPawnStart() {
		return ((T (*)(VehicleEventProcessor*))(Il2CppBase() + 0x27DF57C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEventBeforePawnStart() {
		return ((T (*)(VehicleEventProcessor*))(Il2CppBase() + 0x27DF584))(this);
	}

};

}
