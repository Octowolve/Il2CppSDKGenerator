#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRPawnEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRPawnEventProcessor"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventAfterPawnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigNetSyncModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActualChangeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAttachmentChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAttachmentChangedByClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartAircrft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_BRPawn() {
		return ((T (*)(BRPawnEventProcessor*))(Il2CppBase() + 0x1AC4BFC))(this);
	}
	template <typename T = void> T RegisterEventAfterPawnStart() {
		return ((T (*)(BRPawnEventProcessor*))(Il2CppBase() + 0x1AC4CB4))(this);
	}
	template <typename T = void> T ConfigNetSyncModuleList() {
		return ((T (*)(BRPawnEventProcessor*))(Il2CppBase() + 0x1AC4E94))(this);
	}
	template <typename T = void> T OnActualChangeWeapon(uintptr_t msg) {
		return ((T (*)(BRPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x1AC505C))(this, msg);
	}
	template <typename T = void> T OnAttachmentChanged(uintptr_t msg) {
		return ((T (*)(BRPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x1AC526C))(this, msg);
	}
	template <typename T = void> T OnAttachmentChangedByClient(uintptr_t msg) {
		return ((T (*)(BRPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x1AC5E64))(this, msg);
	}
	template <typename T = void> T OnStartAircrft(uintptr_t msg) {
		return ((T (*)(BRPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x1AC65F4))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEventAfterPawnStart() {
		return ((T (*)(BRPawnEventProcessor*))(Il2CppBase() + 0x1AC6828))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigNetSyncModuleList() {
		return ((T (*)(BRPawnEventProcessor*))(Il2CppBase() + 0x1AC6830))(this);
	}

};

}
