#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChipMachineSlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChipMachineSlot"));
	}

	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_BoxData() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& bOpened() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& bCanOpen() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> T& Anim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& SlotEffect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& TriggerCollider() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& FULL_Scale_X() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Red() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Green() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ProgressLine() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& ChipTrans() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& AnimDirectionName() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& m_ProgressScale() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEmptyBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncBoxData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = bool> T get_CanOpen() {
		return ((T (*)(BRChipMachineSlot*))(Il2CppBase() + 0x24FE9AC))(this);
	}
	template <typename T = void> T set_CanOpen(bool value) {
		return ((T (*)(BRChipMachineSlot*, bool))(Il2CppBase() + 0x24FE9B4))(this, value);
	}
	template <typename T = bool> T IsEmptyBox() {
		return ((T (*)(BRChipMachineSlot*))(Il2CppBase() + 0x24FE9BC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRChipMachineSlot*))(Il2CppBase() + 0x24FEA78))(this);
	}
	template <typename T = void> T SyncBoxData(uintptr_t owner, uintptr_t boxData, uint32_t index) {
		return ((T (*)(BRChipMachineSlot*, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x24FBF74))(this, owner, boxData, index);
	}
	template <typename T = void> T OnOpenStateChanged(bool bOpen) {
		return ((T (*)(BRChipMachineSlot*, bool))(Il2CppBase() + 0x24FEB90))(this, bOpen);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BRChipMachineSlot*, uintptr_t))(Il2CppBase() + 0x24FEF8C))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(BRChipMachineSlot*, uintptr_t))(Il2CppBase() + 0x24FF2C8))(this, other);
	}
	template <typename T = void> T DoOpen() {
		return ((T (*)(BRChipMachineSlot*))(Il2CppBase() + 0x24FF5DC))(this);
	}
	template <typename T = void> T UpdateProgress(float value) {
		return ((T (*)(BRChipMachineSlot*, float))(Il2CppBase() + 0x24FCE80))(this, value);
	}

};

}
