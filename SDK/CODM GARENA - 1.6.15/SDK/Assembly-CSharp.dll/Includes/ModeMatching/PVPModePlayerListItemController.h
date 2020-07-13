#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ModeMatching {

class PVPModePlayerListItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ModeMatching", "PVPModePlayerListItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PVPModePlayerListItemController*))(Il2CppBase() + 0x3309D94))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVPModePlayerListItemController*))(Il2CppBase() + 0x3309EA0))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(PVPModePlayerListItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3309F44))(this, list, index, data);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPModePlayerListItemController*))(Il2CppBase() + 0x330B018))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVPModePlayerListItemController*))(Il2CppBase() + 0x330B020))(this);
	}

};

}
