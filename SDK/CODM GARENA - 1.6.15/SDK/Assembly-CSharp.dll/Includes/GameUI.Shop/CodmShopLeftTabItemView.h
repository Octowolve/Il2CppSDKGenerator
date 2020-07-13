#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Shop {

class CodmShopLeftTabItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Shop", "CodmShopLeftTabItemView"));
	}

	template <typename T = uintptr_t> T& WidgetNormal() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelNormal() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SpriteNormal() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& WidgetOn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LabelOn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SpriteOn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Btn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& RedPointSprite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& m_LeftTagId() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_LeftTagId() {
		return ((T (*)(CodmShopLeftTabItemView*))(Il2CppBase() + 0x3C8DF94))(this);
	}
	template <typename T = void> T SetData(uintptr_t data) {
		return ((T (*)(CodmShopLeftTabItemView*, uintptr_t))(Il2CppBase() + 0x3C8D730))(this, data);
	}

};

}
