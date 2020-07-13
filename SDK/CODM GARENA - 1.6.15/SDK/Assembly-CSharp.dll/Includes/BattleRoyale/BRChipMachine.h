#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChipMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChipMachine"));
	}

	template <typename T = uintptr_t> T& m_CurrentState() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& ModelRoot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SlotList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Effect() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& bContainNotOpenBox() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& HotAreaReapot() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& bHasSpawnEffect() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_CurrentTimeSum() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_bHasPlaySound() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_HasSetGreenProgress() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadFinishEffectComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ContainNotOpenBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateChangeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginCountDown30() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginCountDown5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChipTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckContainNotOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFarDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> T get_IsCanOpen() {
		return ((T (*)(BRChipMachine*))(Il2CppBase() + 0x24FB974))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRChipMachine*))(Il2CppBase() + 0x24FB984))(this);
	}
	template <typename T = void> T Init(uint32_t Uid) {
		return ((T (*)(BRChipMachine*, uint32_t))(Il2CppBase() + 0x24FBAA8))(this, Uid);
	}
	template <typename T = void> T SyncInfo(uintptr_t info) {
		return ((T (*)(BRChipMachine*, uintptr_t))(Il2CppBase() + 0x24FBBF8))(this, info);
	}
	template <typename T = void> T OnLoadFinishEffectComplete(int32_t assetid, uintptr_t obj) {
		return ((T (*)(BRChipMachine*, int32_t, uintptr_t))(Il2CppBase() + 0x24FC2F8))(this, assetid, obj);
	}
	template <typename T = bool> T ContainNotOpenBox() {
		return ((T (*)(BRChipMachine*))(Il2CppBase() + 0x24FC564))(this);
	}
	template <typename T = void> T OnStateChangeChange() {
		return ((T (*)(BRChipMachine*))(Il2CppBase() + 0x24FC214))(this);
	}
	template <typename T = void> T BeginCountDown30() {
		return ((T (*)(BRChipMachine*))(Il2CppBase() + 0x24FC60C))(this);
	}
	template <typename T = void> T BeginCountDown5() {
		return ((T (*)(BRChipMachine*))(Il2CppBase() + 0x24FC6A4))(this);
	}
	template <typename T = uintptr_t> T GetChipTransform(int32_t index) {
		return ((T (*)(BRChipMachine*, int32_t))(Il2CppBase() + 0x24FC73C))(this, index);
	}
	template <typename T = bool> T CheckContainNotOpen() {
		return ((T (*)(BRChipMachine*))(Il2CppBase() + 0x24FC828))(this);
	}
	template <typename T = void> T CheckFarDistance() {
		return ((T (*)(BRChipMachine*))(Il2CppBase() + 0x24FC8D0))(this);
	}
	template <typename T = bool> T get_IsTickable() {
		return ((T (*)(BRChipMachine*))(Il2CppBase() + 0x24FCB64))(this);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(BRChipMachine*, float))(Il2CppBase() + 0x24FCB70))(this, fDeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRChipMachine*))(Il2CppBase() + 0x24FD060))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRChipMachine*, float))(Il2CppBase() + 0x24FD068))(this, P0);
	}

};

}
