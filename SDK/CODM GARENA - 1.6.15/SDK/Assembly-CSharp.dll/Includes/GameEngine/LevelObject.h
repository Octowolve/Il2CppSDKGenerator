#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LevelObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LevelObject"));
	}

	template <typename T = uint32_t> T& UID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& colliders() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_bIsShutDown() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& OnUsablityChange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ContainsNote() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetColliderEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncUsability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDSLoginSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnableChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnionComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(LevelObject*))(Il2CppBase() + 0x2495B64))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LevelObject*))(Il2CppBase() + 0x245EA28))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LevelObject*))(Il2CppBase() + 0x2495B6C))(this);
	}
	template <typename T = bool> T ContainsNote(Il2CppString* note) {
		return ((T (*)(LevelObject*, Il2CppString*))(Il2CppBase() + 0x2495C04))(this, note);
	}
	template <typename T = void> T SetColliderEnabled(bool enabled) {
		return ((T (*)(LevelObject*, bool))(Il2CppBase() + 0x2495CAC))(this, enabled);
	}
	template <typename T = void> T OnStateChanged(bool bOn) {
		return ((T (*)(LevelObject*, bool))(Il2CppBase() + 0x2461300))(this, bOn);
	}
	template <typename T = void> T OnSyncValue(int32_t value) {
		return ((T (*)(LevelObject*, int32_t))(Il2CppBase() + 0x2495E2C))(this, value);
	}
	template <typename T = void> T OnSyncUsability(bool available) {
		return ((T (*)(LevelObject*, bool))(Il2CppBase() + 0x245EEA4))(this, available);
	}
	template <typename T = void> T OnDSLoginSuccess() {
		return ((T (*)(LevelObject*))(Il2CppBase() + 0x2495F3C))(this);
	}
	template <typename T = bool> T get_IsTickable() {
		return ((T (*)(LevelObject*))(Il2CppBase() + 0x2495FD4))(this);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(LevelObject*, float))(Il2CppBase() + 0x245FB3C))(this, fDeltaTime);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(LevelObject*))(Il2CppBase() + 0x2495FDC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LevelObject*))(Il2CppBase() + 0x249611C))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(LevelObject*))(Il2CppBase() + 0x24961B4))(this);
	}
	template <typename T = void> T OnEnableChange(bool bEnable) {
		return ((T (*)(LevelObject*, bool))(Il2CppBase() + 0x24962C8))(this, bEnable);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetUnionComponents(Il2CppArray<uintptr_t>* groups, Il2CppArray<uintptr_t>* units) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4E42598))(0, groups, units);
	}

};

}
