#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BREquipmentSlotItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BREquipmentSlotItemView"));
	}

	template <typename T = uintptr_t> T& EquipmentSlotType() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& TipsSprite() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& EmptyShadow() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& InactiveLabelGo() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUIFull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DefaultUIName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUIEventListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPicture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUIEmptyShadow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTipsSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInactiveLabelGoVisiable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T RefreshUIFull() {
		return ((T (*)(BREquipmentSlotItemView*))(Il2CppBase() + 0x18C9864))(this);
	}
	template <typename T = Il2CppString*> T DefaultUIName() {
		return ((T (*)(BREquipmentSlotItemView*))(Il2CppBase() + 0x18F2438))(this);
	}
	template <typename T = void> T InitUIEventListener() {
		return ((T (*)(BREquipmentSlotItemView*))(Il2CppBase() + 0x18F2560))(this);
	}
	template <typename T = void> T RefreshPicture() {
		return ((T (*)(BREquipmentSlotItemView*))(Il2CppBase() + 0x18F28B8))(this);
	}
	template <typename T = void> T RefreshUIEmptyShadow() {
		return ((T (*)(BREquipmentSlotItemView*))(Il2CppBase() + 0x18F1FA4))(this);
	}
	template <typename T = void> T RefreshTipsSprite() {
		return ((T (*)(BREquipmentSlotItemView*))(Il2CppBase() + 0x18F20D8))(this);
	}
	template <typename T = Il2CppString*> T get_DefaultBackgroundSpriteName() {
		return ((T (*)(BREquipmentSlotItemView*))(Il2CppBase() + 0x18F2C98))(this);
	}
	template <typename T = void> T SetInactiveLabelGoVisiable(bool visiable) {
		return ((T (*)(BREquipmentSlotItemView*, bool))(Il2CppBase() + 0x18DDBB8))(this, visiable);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BREquipmentSlotItemView*))(Il2CppBase() + 0x18CA7DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshUIFull() {
		return ((T (*)(BREquipmentSlotItemView*))(Il2CppBase() + 0x18F2D80))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_DefaultUIName() {
		return ((T (*)(BREquipmentSlotItemView*))(Il2CppBase() + 0x18F2D84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitUIEventListener() {
		return ((T (*)(BREquipmentSlotItemView*))(Il2CppBase() + 0x18F2D88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshPicture() {
		return ((T (*)(BREquipmentSlotItemView*))(Il2CppBase() + 0x18F2D8C))(this);
	}

};

}
