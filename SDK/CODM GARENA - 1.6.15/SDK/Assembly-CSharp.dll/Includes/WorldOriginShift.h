#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorldOriginShift
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldOriginShift"));
	}

	template <typename T = Il2CppVector3> T& Shift() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& mLastTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> static T& constUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& DebugEnableOriginShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> static T& EnableOriginShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mShiftObjects() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> static T& CurrentShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> static T& enableVirtualSceneShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = float> static T& Threshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& ShiftTile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& ShiftY() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mIgnoreList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddListenerImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveListenerImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVirtualSceneLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShaderShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplySceneShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ApplySceneShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyCameraShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = void> T Update() {
		return ((T (*)(WorldOriginShift*))(Il2CppBase() + 0xC19464))(this);
	}
	template <typename T = void> static T AddListener(uintptr_t listener) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xC19A28))(0, listener);
	}
	template <typename T = void> static T RemoveListener(uintptr_t listener) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xC19E5C))(0, listener);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WorldOriginShift*))(Il2CppBase() + 0xC1A124))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WorldOriginShift*))(Il2CppBase() + 0xC1A478))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(WorldOriginShift*))(Il2CppBase() + 0xC18644))(this);
	}
	template <typename T = void> T AddListenerImpl(uintptr_t listener) {
		return ((T (*)(WorldOriginShift*, uintptr_t))(Il2CppBase() + 0xC19BE4))(this, listener);
	}
	template <typename T = void> T RemoveListenerImpl(uintptr_t listener) {
		return ((T (*)(WorldOriginShift*, uintptr_t))(Il2CppBase() + 0xC1A018))(this, listener);
	}
	template <typename T = void> T OnSceneLoaded(uintptr_t scene, uintptr_t mode, bool async) {
		return ((T (*)(WorldOriginShift*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0xC1A698))(this, scene, mode, async);
	}
	template <typename T = void> T OnVirtualSceneLoaded(uintptr_t scene) {
		return ((T (*)(WorldOriginShift*, uintptr_t))(Il2CppBase() + 0xC1AE0C))(this, scene);
	}
	template <typename T = void> T CheckShift() {
		return ((T (*)(WorldOriginShift*))(Il2CppBase() + 0xC195D0))(this);
	}
	template <typename T = void> T ApplyShaderShift(Il2CppVector3 shift) {
		return ((T (*)(WorldOriginShift*, Il2CppVector3))(Il2CppBase() + 0xC1A330))(this, shift);
	}
	template <typename T = void> T ApplySceneShift(uintptr_t scene, Il2CppVector3 shift, bool ignore) {
		return ((T (*)(WorldOriginShift*, uintptr_t, Il2CppVector3, bool))(Il2CppBase() + 0xC1AA68))(this, scene, shift, ignore);
	}
	template <typename T = void> T ApplySceneShift_1(uintptr_t scene, Il2CppVector3 shift) {
		return ((T (*)(WorldOriginShift*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0xC1AFC4))(this, scene, shift);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(WorldOriginShift*, Il2CppVector3))(Il2CppBase() + 0xC1B18C))(this, shift);
	}
	template <typename T = void> T ApplyCameraShift() {
		return ((T (*)(WorldOriginShift*))(Il2CppBase() + 0xC1C140))(this);
	}

};

}
