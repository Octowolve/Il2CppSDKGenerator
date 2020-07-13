#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class CodmShopRightSubTabItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "CodmShopRightSubTabItemView"));
	}

	template <typename T = uintptr_t> T& Btn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ContainerOn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ContainerNormal() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LabelName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LabelNameOn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SpriteItemIcon() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SpriteItemIconOn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& m_SubTagId() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_HighLightColor() {
		return ((T (*)(CodmShopRightSubTabItemView*))(Il2CppBase() + 0x28CC88C))(this);
	}
	template <typename T = uintptr_t> T get_NormalColor() {
		return ((T (*)(CodmShopRightSubTabItemView*))(Il2CppBase() + 0x28CC950))(this);
	}
	template <typename T = int32_t> T get_SubTagId() {
		return ((T (*)(CodmShopRightSubTabItemView*))(Il2CppBase() + 0x28CC7B8))(this);
	}
	template <typename T = void> T SetData(uintptr_t data) {
		return ((T (*)(CodmShopRightSubTabItemView*, uintptr_t))(Il2CppBase() + 0x28CC08C))(this, data);
	}

};

}
