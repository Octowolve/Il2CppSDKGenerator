#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BREquipmentItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BREquipmentItemView"));
	}

	template <typename T = uintptr_t> T& ItemListener() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ItemNameLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CountLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Picture() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& FocusGo() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& BackgroundSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SubScriptSprite() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& UselessGo() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& m_DragTouchID() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& Data() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_IsDragging() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUIEventListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnListenerClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnListenerDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnListenerDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnListenerDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnListenerDragOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnListenerDragOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnListenerDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShadowHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnListenerPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFoucs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUIFull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DefaultUIName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUIName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPicture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshCountLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBackgroundColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSubScriptSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(BREquipmentItemView*))(Il2CppBase() + 0x18C76CC))(this);
	}
	template <typename T = void> T set_Data(uintptr_t value) {
		return ((T (*)(BREquipmentItemView*, uintptr_t))(Il2CppBase() + 0x18C81D4))(this, value);
	}
	template <typename T = void> T SetData(uintptr_t data) {
		return ((T (*)(BREquipmentItemView*, uintptr_t))(Il2CppBase() + 0x18C88F8))(this, data);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BREquipmentItemView*))(Il2CppBase() + 0x18C7780))(this);
	}
	template <typename T = int32_t> T get_DisplayCount() {
		return ((T (*)(BREquipmentItemView*))(Il2CppBase() + 0x18C860C))(this);
	}
	template <typename T = void> T InitUIEventListener() {
		return ((T (*)(BREquipmentItemView*))(Il2CppBase() + 0x18E489C))(this);
	}
	template <typename T = void> T OnListenerClick(uintptr_t go) {
		return ((T (*)(BREquipmentItemView*, uintptr_t))(Il2CppBase() + 0x18E4BE8))(this, go);
	}
	template <typename T = void> T OnListenerDragStart(uintptr_t go) {
		return ((T (*)(BREquipmentItemView*, uintptr_t))(Il2CppBase() + 0x18C920C))(this, go);
	}
	template <typename T = void> T OnListenerDrag(uintptr_t go, Il2CppVector2 delta) {
		return ((T (*)(BREquipmentItemView*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x18E4D50))(this, go, delta);
	}
	template <typename T = void> T OnListenerDragEnd(uintptr_t go) {
		return ((T (*)(BREquipmentItemView*, uintptr_t))(Il2CppBase() + 0x18E51F8))(this, go);
	}
	template <typename T = void> T OnListenerDragOut(uintptr_t go) {
		return ((T (*)(BREquipmentItemView*, uintptr_t))(Il2CppBase() + 0x18E5B78))(this, go);
	}
	template <typename T = void> T OnListenerDragOver(uintptr_t go) {
		return ((T (*)(BREquipmentItemView*, uintptr_t))(Il2CppBase() + 0x18E5C34))(this, go);
	}
	template <typename T = void> T OnListenerDrop(uintptr_t go, uintptr_t other) {
		return ((T (*)(BREquipmentItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18E5CF0))(this, go, other);
	}
	template <typename T = void> T ShadowHandler(bool show) {
		return ((T (*)(BREquipmentItemView*, bool))(Il2CppBase() + 0x18E5748))(this, show);
	}
	template <typename T = void> T OnListenerPress(uintptr_t go, bool state) {
		return ((T (*)(BREquipmentItemView*, uintptr_t, bool))(Il2CppBase() + 0x18E61C4))(this, go, state);
	}
	template <typename T = void> T SetFoucs(bool show) {
		return ((T (*)(BREquipmentItemView*, bool))(Il2CppBase() + 0x18E6488))(this, show);
	}
	template <typename T = void> T RefreshUIFull() {
		return ((T (*)(BREquipmentItemView*))(Il2CppBase() + 0x18E6550))(this);
	}
	template <typename T = Il2CppString*> T DefaultUIName() {
		return ((T (*)(BREquipmentItemView*))(Il2CppBase() + 0x18E6804))(this);
	}
	template <typename T = void> T RefreshUIName() {
		return ((T (*)(BREquipmentItemView*))(Il2CppBase() + 0x18E6644))(this);
	}
	template <typename T = void> T RefreshPicture() {
		return ((T (*)(BREquipmentItemView*))(Il2CppBase() + 0x18E68F4))(this);
	}
	template <typename T = void> T RefreshCountLabel() {
		return ((T (*)(BREquipmentItemView*))(Il2CppBase() + 0x18E6AFC))(this);
	}
	template <typename T = Il2CppString*> T get_DefaultBackgroundSpriteName() {
		return ((T (*)(BREquipmentItemView*))(Il2CppBase() + 0x18E6CAC))(this);
	}
	template <typename T = void> T RefreshBackgroundColor() {
		return ((T (*)(BREquipmentItemView*))(Il2CppBase() + 0x18CA5C0))(this);
	}
	template <typename T = Il2CppString*> T get_DefaultSubScriptSpriteName() {
		return ((T (*)(BREquipmentItemView*))(Il2CppBase() + 0x18E6D24))(this);
	}
	template <typename T = void> T RefreshSubScriptSprite() {
		return ((T (*)(BREquipmentItemView*))(Il2CppBase() + 0x18E6DD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BREquipmentItemView*))(Il2CppBase() + 0x18E7098))(this);
	}

};

}
