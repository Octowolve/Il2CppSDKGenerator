#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class TriggerVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "TriggerVolume"));
	}

	template <typename T = bool> T& bShowGizmo() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_color() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& NotificationType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& ShouldTriggerEnter() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& ShouldTriggerLeave() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = bool> T& OnlyForLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x46);
	}
	template <typename T = bool> T& TriggerForLocalPlayerVehicle() {
		return *(T*)((uintptr_t)this + 0x47);
	}
	template <typename T = uintptr_t> T& LocalPlayerEnterExitDelegate() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& IndexTrigger() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& LocalPlayerEnterExitDelegate1() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& LocalPlayerEnterExitDelegateWithVolume() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTriggerLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalServerTriggerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetComponentInParents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_volumeCollider() {
		return ((T (*)(TriggerVolume*))(Il2CppBase() + 0x343C464))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TriggerVolume*))(Il2CppBase() + 0x33F0EFC))(this);
	}
	template <typename T = uintptr_t> T GetTriggerLocalPawn(uintptr_t other) {
		return ((T (*)(TriggerVolume*, uintptr_t))(Il2CppBase() + 0x343C46C))(this, other);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(TriggerVolume*, uintptr_t))(Il2CppBase() + 0x3434E94))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(TriggerVolume*, uintptr_t))(Il2CppBase() + 0x343C828))(this, other);
	}
	template <typename T = void> T OnLocalServerTriggerEnterExit(uintptr_t other, bool enter) {
		return ((T (*)(TriggerVolume*, uintptr_t, bool))(Il2CppBase() + 0x343C6FC))(this, other, enter);
	}
	template <typename T = uintptr_t> T GetComponentInParents(uintptr_t StartTran, int32_t MaxLevel) {
		return ((T (*)(TriggerVolume*, uintptr_t, int32_t))(Il2CppBase() + 0x3353990))(this, StartTran, MaxLevel);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TriggerVolume*))(Il2CppBase() + 0x343CA9C))(this);
	}

};

}
