#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CloseSniperZoomBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CloseSniperZoomBtnController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseSniperZoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CloseSniperZoomBtnController*))(Il2CppBase() + 0x3C74E08))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CloseSniperZoomBtnController*))(Il2CppBase() + 0x3C74EAC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CloseSniperZoomBtnController*))(Il2CppBase() + 0x3C74FB8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CloseSniperZoomBtnController*))(Il2CppBase() + 0x3C75108))(this);
	}
	template <typename T = void> T OnCloseSniperZoom() {
		return ((T (*)(CloseSniperZoomBtnController*))(Il2CppBase() + 0x3C75258))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CloseSniperZoomBtnController*))(Il2CppBase() + 0x3C75598))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CloseSniperZoomBtnController*))(Il2CppBase() + 0x3C755A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CloseSniperZoomBtnController*))(Il2CppBase() + 0x3C755A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CloseSniperZoomBtnController*))(Il2CppBase() + 0x3C755B0))(this);
	}

};

}
