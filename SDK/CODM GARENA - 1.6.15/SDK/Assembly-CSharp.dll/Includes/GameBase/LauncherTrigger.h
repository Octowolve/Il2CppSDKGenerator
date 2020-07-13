#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LauncherTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LauncherTrigger"));
	}

	template <typename T = uintptr_t> T& m_LauncherTrigger() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_parentPropPawn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_BoxCollider() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_GameTriggerVolume() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_ActorId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_bUsable() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLauncherNetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndexTriggerByVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = int32_t> T get_ActorId() {
		return ((T (*)(LauncherTrigger*))(Il2CppBase() + 0x2E2CB74))(this);
	}
	template <typename T = void> T set_ActorId(int32_t value) {
		return ((T (*)(LauncherTrigger*, int32_t))(Il2CppBase() + 0x2E2CB7C))(this, value);
	}
	template <typename T = bool> T get_Usable() {
		return ((T (*)(LauncherTrigger*))(Il2CppBase() + 0x2E2CB84))(this);
	}
	template <typename T = void> T set_Usable(bool value) {
		return ((T (*)(LauncherTrigger*, bool))(Il2CppBase() + 0x2E2CB8C))(this, value);
	}
	template <typename T = void> T Init(uintptr_t parentPropPawn) {
		return ((T (*)(LauncherTrigger*, uintptr_t))(Il2CppBase() + 0x2E2CB94))(this, parentPropPawn);
	}
	template <typename T = void> T LoadGameObject(Il2CppString* socketName) {
		return ((T (*)(LauncherTrigger*, Il2CppString*))(Il2CppBase() + 0x2E2CC3C))(this, socketName);
	}
	template <typename T = void> T SetLauncherNetData(uintptr_t netData) {
		return ((T (*)(LauncherTrigger*, uintptr_t))(Il2CppBase() + 0x2E2CE60))(this, netData);
	}
	template <typename T = void> T SafeSetActive(bool bActive) {
		return ((T (*)(LauncherTrigger*, bool))(Il2CppBase() + 0x2E2CF38))(this, bActive);
	}
	template <typename T = int32_t> T GetIndexTriggerByVolume() {
		return ((T (*)(LauncherTrigger*))(Il2CppBase() + 0x2E2D238))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(LauncherTrigger*))(Il2CppBase() + 0x2E2D350))(this);
	}

};

}
