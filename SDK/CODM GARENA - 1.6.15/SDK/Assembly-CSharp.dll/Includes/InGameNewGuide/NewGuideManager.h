#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class NewGuideManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "NewGuideManager"));
	}

	template <typename T = uintptr_t> static T& CurNewGuideMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ItemList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_CurItem() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> static T& m_UpdateInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_TimeCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_HighPriorityItem() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_TutorialTypeBegin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_NewGuideItemType_Begin() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHighPriorityItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetHighPriorityItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemOverTimeDone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemDone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemInterrupt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HaveItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> static T get_IsBRNewGuideMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x317094C))(0);
	}
	template <typename T = bool> static T get_IsMPNewGuideMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x3170A04))(0);
	}
	template <typename T = bool> static T get_IsPVENewGuideMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x3170AC0))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ItemList() {
		return ((T (*)(NewGuideManager*))(Il2CppBase() + 0x3170B7C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(NewGuideManager*))(Il2CppBase() + 0x3168F24))(this);
	}
	template <typename T = void> T AddItem(uintptr_t item) {
		return ((T (*)(NewGuideManager*, uintptr_t))(Il2CppBase() + 0x3169040))(this, item);
	}
	template <typename T = void> T RemoveItem(uintptr_t item) {
		return ((T (*)(NewGuideManager*, uintptr_t))(Il2CppBase() + 0x3169730))(this, item);
	}
	template <typename T = void> T SetHighPriorityItem(uintptr_t item) {
		return ((T (*)(NewGuideManager*, uintptr_t))(Il2CppBase() + 0x3170B84))(this, item);
	}
	template <typename T = void> T SetHighPriorityItem_1(uintptr_t itemType) {
		return ((T (*)(NewGuideManager*, uintptr_t))(Il2CppBase() + 0x3167A30))(this, itemType);
	}
	template <typename T = void> T ItemOverTimeDone(uintptr_t item) {
		return ((T (*)(NewGuideManager*, uintptr_t))(Il2CppBase() + 0x316934C))(this, item);
	}
	template <typename T = void> T ItemDone(uintptr_t item) {
		return ((T (*)(NewGuideManager*, uintptr_t))(Il2CppBase() + 0x3169B74))(this, item);
	}
	template <typename T = void> T ItemInterrupt(uintptr_t item) {
		return ((T (*)(NewGuideManager*, uintptr_t))(Il2CppBase() + 0x3169A7C))(this, item);
	}
	template <typename T = void> T Update(float dt) {
		return ((T (*)(NewGuideManager*, float))(Il2CppBase() + 0x3170E90))(this, dt);
	}
	template <typename T = void> T RunItem() {
		return ((T (*)(NewGuideManager*))(Il2CppBase() + 0x3171138))(this);
	}
	template <typename T = bool> T HaveItem(uintptr_t itemType) {
		return ((T (*)(NewGuideManager*, uintptr_t))(Il2CppBase() + 0x31714FC))(this, itemType);
	}
	template <typename T = uintptr_t> T GetItemByType(uintptr_t itemType) {
		return ((T (*)(NewGuideManager*, uintptr_t))(Il2CppBase() + 0x3170C5C))(this, itemType);
	}

};

}
