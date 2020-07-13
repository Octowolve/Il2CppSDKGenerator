#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MileStoneView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MileStoneView"));
	}

	template <typename T = uintptr_t> T& ContainerRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TutorialAnimationObj() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LabelLevel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LabelExp() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ContainerLeftArrow() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& BtnLeftArrow() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& LabelLeftArrow() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ContainerRightArrow() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BtnRightArrow() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& LabelRightArrow() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& loadoutItemDetailView() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& LabelItemName_Select() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& SpriteQuality_Select() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LabelLevel_Select() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SpriteItem_Select() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BgWight() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ContainerGet() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ContainerNeedExp() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& LabelLevel_Needed() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& LabelExp_Cur() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& LabelExp_Needed() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& ContainerItem() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& ContainerBag() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& bagItems() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& MainWeapon() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& ViceWeapon() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& DoubleWeapon() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& weapons() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& ContainerLoadout() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& skills() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& grenades() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& perks() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& SingleItemChange() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& DoubleItemChange() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& BtnChangeItem() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& LabelItemIndex() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& LabelLevelItem() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevelInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeqFromLoadoutPosType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetArrowBtns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnmition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T SetLevelInfo(uintptr_t mLevelInfo) {
		return ((T (*)(MileStoneView*, uintptr_t))(Il2CppBase() + 0x41E8940))(this, mLevelInfo);
	}
	template <typename T = void> T SetSelectView(uintptr_t data, bool isDoubleItem, int32_t idx) {
		return ((T (*)(MileStoneView*, uintptr_t, bool, int32_t))(Il2CppBase() + 0x41EA4A8))(this, data, isDoubleItem, idx);
	}
	template <typename T = int32_t> T GetSeqFromLoadoutPosType(int32_t type, int32_t loadoutIndex) {
		return ((T (*)(MileStoneView*, int32_t, int32_t))(Il2CppBase() + 0x41ED6F8))(this, type, loadoutIndex);
	}
	template <typename T = void> T SetArrowBtns(int32_t leftNum, int32_t rightNum) {
		return ((T (*)(MileStoneView*, int32_t, int32_t))(Il2CppBase() + 0x41EA348))(this, leftNum, rightNum);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(MileStoneView*))(Il2CppBase() + 0x41EDB18))(this);
	}
	template <typename T = void> T SetAnmition() {
		return ((T (*)(MileStoneView*))(Il2CppBase() + 0x41ECA54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(MileStoneView*))(Il2CppBase() + 0x41EDBC0))(this);
	}

};

}
