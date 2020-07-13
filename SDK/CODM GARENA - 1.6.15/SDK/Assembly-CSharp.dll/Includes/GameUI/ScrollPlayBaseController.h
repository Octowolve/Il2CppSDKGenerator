#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ScrollPlayBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ScrollPlayBaseController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScrollPlayData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnEnterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDataValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ScrollPlayBaseController*))(Il2CppBase() + 0x447E13C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ScrollPlayBaseController*))(Il2CppBase() + 0x447E248))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ScrollPlayBaseController*))(Il2CppBase() + 0x447E2E8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ScrollPlayBaseController*))(Il2CppBase() + 0x447E480))(this);
	}
	template <typename T = void> T SetScrollPlayData(Il2CppList<uintptr_t>* dataList, int32_t itemWidth, int32_t itemHeight) {
		return ((T (*)(ScrollPlayBaseController*, Il2CppList<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1E85474))(this, dataList, itemWidth, itemHeight);
	}
	template <typename T = void> T _OnBtnEnterClick() {
		return ((T (*)(ScrollPlayBaseController*))(Il2CppBase() + 0x447E5F4))(this);
	}
	template <typename T = bool> T IsDataValid() {
		return ((T (*)(ScrollPlayBaseController*))(Il2CppBase() + 0x447EA8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ScrollPlayBaseController*))(Il2CppBase() + 0x447EB2C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ScrollPlayBaseController*))(Il2CppBase() + 0x447EB34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ScrollPlayBaseController*))(Il2CppBase() + 0x447EB3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ScrollPlayBaseController*))(Il2CppBase() + 0x447EB44))(this);
	}

};

}
