#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BREquipmentAttachmentSlotItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BREquipmentAttachmentSlotItemView"));
	}

	template <typename T = uintptr_t> T& AttachSlot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& AttachSlotLabel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& AttachSlotSprite() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& InactiveGo() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& CanEquitSprite() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& OnEffect() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& m_AttachLock() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& WeaponSlotView() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& m_Usability() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponItemID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnListenerDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUIFull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBackgroundColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUIAttachSlotLabelVisiable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUsabilityState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCanEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigCanEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEffectInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEquipEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> T get_AttachLock() {
		return ((T (*)(BREquipmentAttachmentSlotItemView*))(Il2CppBase() + 0x18C876C))(this);
	}
	template <typename T = void> T SetData(uintptr_t data) {
		return ((T (*)(BREquipmentAttachmentSlotItemView*, uintptr_t))(Il2CppBase() + 0x18C8774))(this, data);
	}
	template <typename T = int32_t> T GetWeaponItemID() {
		return ((T (*)(BREquipmentAttachmentSlotItemView*))(Il2CppBase() + 0x18C89B4))(this);
	}
	template <typename T = void> T OnListenerDragStart(uintptr_t go) {
		return ((T (*)(BREquipmentAttachmentSlotItemView*, uintptr_t))(Il2CppBase() + 0x18C8FCC))(this, go);
	}
	template <typename T = void> T RefreshUIFull() {
		return ((T (*)(BREquipmentAttachmentSlotItemView*))(Il2CppBase() + 0x18C9710))(this);
	}
	template <typename T = Il2CppString*> T get_DefaultBackgroundSpriteName() {
		return ((T (*)(BREquipmentAttachmentSlotItemView*))(Il2CppBase() + 0x18C9A54))(this);
	}
	template <typename T = void> T RefreshBackgroundColor() {
		return ((T (*)(BREquipmentAttachmentSlotItemView*))(Il2CppBase() + 0x18C9ACC))(this);
	}
	template <typename T = void> T RefreshUIAttachSlotLabelVisiable() {
		return ((T (*)(BREquipmentAttachmentSlotItemView*))(Il2CppBase() + 0x18C9918))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BREquipmentAttachmentSlotItemView*))(Il2CppBase() + 0x18C9D80))(this);
	}
	template <typename T = bool> T get_Usablility() {
		return ((T (*)(BREquipmentAttachmentSlotItemView*))(Il2CppBase() + 0x18C9E18))(this);
	}
	template <typename T = void> T SetUsabilityState(bool usability) {
		return ((T (*)(BREquipmentAttachmentSlotItemView*, bool))(Il2CppBase() + 0x18C9E20))(this, usability);
	}
	template <typename T = bool> T get_CanEquipEffect() {
		return ((T (*)(BREquipmentAttachmentSlotItemView*))(Il2CppBase() + 0x18C9F00))(this);
	}
	template <typename T = void> T ClearCanEquip() {
		return ((T (*)(BREquipmentAttachmentSlotItemView*))(Il2CppBase() + 0x18C9FAC))(this);
	}
	template <typename T = void> T ConfigCanEquip(int32_t attachmentItemId) {
		return ((T (*)(BREquipmentAttachmentSlotItemView*, int32_t))(Il2CppBase() + 0x18CA098))(this, attachmentItemId);
	}
	template <typename T = void> T ShowEffectInternal() {
		return ((T (*)(BREquipmentAttachmentSlotItemView*))(Il2CppBase() + 0x18CA2B8))(this);
	}
	template <typename T = void> T ShowEquipEffect() {
		return ((T (*)(BREquipmentAttachmentSlotItemView*))(Il2CppBase() + 0x18CA3FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetData(uintptr_t P0) {
		return ((T (*)(BREquipmentAttachmentSlotItemView*, uintptr_t))(Il2CppBase() + 0x18CA5B0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnListenerDragStart(uintptr_t P0) {
		return ((T (*)(BREquipmentAttachmentSlotItemView*, uintptr_t))(Il2CppBase() + 0x18CA5B4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshUIFull() {
		return ((T (*)(BREquipmentAttachmentSlotItemView*))(Il2CppBase() + 0x18CA5B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshBackgroundColor() {
		return ((T (*)(BREquipmentAttachmentSlotItemView*))(Il2CppBase() + 0x18CA5BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(BREquipmentAttachmentSlotItemView*))(Il2CppBase() + 0x18CA7D8))(this);
	}

};

}
