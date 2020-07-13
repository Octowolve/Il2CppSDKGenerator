#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopScrollPlayController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopScrollPlayController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDataValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ShopScrollPlayController*))(Il2CppBase() + 0x23AE5A0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ShopScrollPlayController*))(Il2CppBase() + 0x23AE6AC))(this);
	}
	template <typename T = void> T UpdateView(Il2CppList<uintptr_t>* list) {
		return ((T (*)(ShopScrollPlayController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x23AE750))(this, list);
	}
	template <typename T = bool> T IsDataValid() {
		return ((T (*)(ShopScrollPlayController*))(Il2CppBase() + 0x23AE834))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ShopScrollPlayController*))(Il2CppBase() + 0x23AE8D4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ShopScrollPlayController*))(Il2CppBase() + 0x23AE8DC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsDataValid() {
		return ((T (*)(ShopScrollPlayController*))(Il2CppBase() + 0x23AE8E4))(this);
	}

};

}
