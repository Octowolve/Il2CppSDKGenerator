#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIAgingPropsDecomposeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIAgingPropsDecomposeController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCoutinueBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UIAgingPropsDecomposeController*))(Il2CppBase() + 0x29C0818))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UIAgingPropsDecomposeController*))(Il2CppBase() + 0x29C08BC))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(UIAgingPropsDecomposeController*))(Il2CppBase() + 0x29C09C8))(this);
	}
	template <typename T = void> T OnCoutinueBtnClick() {
		return ((T (*)(UIAgingPropsDecomposeController*))(Il2CppBase() + 0x29C0FC4))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(UIAgingPropsDecomposeController*))(Il2CppBase() + 0x29C107C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UIAgingPropsDecomposeController*))(Il2CppBase() + 0x29C1148))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UIAgingPropsDecomposeController*))(Il2CppBase() + 0x29C11F0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(UIAgingPropsDecomposeController*))(Il2CppBase() + 0x29C1298))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UIAgingPropsDecomposeController*))(Il2CppBase() + 0x29C1340))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UIAgingPropsDecomposeController*))(Il2CppBase() + 0x29C1348))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(UIAgingPropsDecomposeController*))(Il2CppBase() + 0x29C1350))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UIAgingPropsDecomposeController*))(Il2CppBase() + 0x29C1358))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UIAgingPropsDecomposeController*))(Il2CppBase() + 0x29C1360))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(UIAgingPropsDecomposeController*))(Il2CppBase() + 0x29C1368))(this);
	}

};

}
