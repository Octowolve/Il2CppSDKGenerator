#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutSellItemConfirmController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutSellItemConfirmController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& OnConfirmAction() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutSellItemConfirmController*))(Il2CppBase() + 0x1F41134))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutSellItemConfirmController*))(Il2CppBase() + 0x1F411D8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutSellItemConfirmController*))(Il2CppBase() + 0x1F412E4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutSellItemConfirmController*))(Il2CppBase() + 0x1F41418))(this);
	}
	template <typename T = void> T InitView(int32_t items, Il2CppList<uintptr_t>* coin) {
		return ((T (*)(LoadoutSellItemConfirmController*, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1F41534))(this, items, coin);
	}
	template <typename T = void> T OnBtnConfirmClick() {
		return ((T (*)(LoadoutSellItemConfirmController*))(Il2CppBase() + 0x1F41A1C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutSellItemConfirmController*))(Il2CppBase() + 0x1F41AE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutSellItemConfirmController*))(Il2CppBase() + 0x1F41AE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutSellItemConfirmController*))(Il2CppBase() + 0x1F41AF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutSellItemConfirmController*))(Il2CppBase() + 0x1F41AF8))(this);
	}

};

}
