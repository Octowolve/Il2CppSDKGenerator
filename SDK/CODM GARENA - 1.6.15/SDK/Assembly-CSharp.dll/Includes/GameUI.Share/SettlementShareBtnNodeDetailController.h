#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class SettlementShareBtnNodeDetailController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "SettlementShareBtnNodeDetailController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementShareBtnNodeDetailController*))(Il2CppBase() + 0x448FC90))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementShareBtnNodeDetailController*))(Il2CppBase() + 0x448FD34))(this);
	}

};

}
