#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopDetailItemViewChest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopDetailItemView_Chest"));
	}

	template <typename T = uintptr_t> T& ContainerRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& SpriteQuality() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LabelNum() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& SpriteItemIcon() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& SpriteSelect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Mask() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& allow_restore_flag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& timeLimitTemplate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& fragObj() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& fragNumLabel() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& BtnDownloadAsset() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_PropInfo() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_index() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector2> T& SoldierRect() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector2> T& HeadAvaterRect() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector2> T& NormalRect() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAssetDownloadBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetData(uintptr_t propInfo, int32_t selectPropId, int32_t index, int32_t currentSelectIndx) {
		return ((T (*)(ShopDetailItemViewChest*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x237C334))(this, propInfo, selectPropId, index, currentSelectIndx);
	}
	template <typename T = void> T SetAssetDownloadBtn(uint32_t goodID) {
		return ((T (*)(ShopDetailItemViewChest*, uint32_t))(Il2CppBase() + 0x237D7D0))(this, goodID);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(ShopDetailItemViewChest*))(Il2CppBase() + 0x237D908))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClick() {
		return ((T (*)(ShopDetailItemViewChest*))(Il2CppBase() + 0x237DB30))(this);
	}

};

}
