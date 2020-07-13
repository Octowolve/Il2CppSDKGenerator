#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalMapControllerMP
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalMapController_MP"));
	}

	template <typename T = uintptr_t> T& m_MapView() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEscapleBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadClosePage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TacticalMapControllerMP*))(Il2CppBase() + 0x277CD98))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TacticalMapControllerMP*))(Il2CppBase() + 0x27780C4))(this);
	}
	template <typename T = void> T OnShowView(uintptr_t inMsg) {
		return ((T (*)(TacticalMapControllerMP*, uintptr_t))(Il2CppBase() + 0x2778880))(this, inMsg);
	}
	template <typename T = bool> T OnEscapleBtnClick() {
		return ((T (*)(TacticalMapControllerMP*))(Il2CppBase() + 0x277DFD0))(this);
	}
	template <typename T = bool> T OnGamepadClosePage() {
		return ((T (*)(TacticalMapControllerMP*))(Il2CppBase() + 0x277CE48))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TacticalMapControllerMP*))(Il2CppBase() + 0x277A7C4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TacticalMapControllerMP*))(Il2CppBase() + 0x277B12C))(this);
	}
	template <typename T = void> T RefreshComponent() {
		return ((T (*)(TacticalMapControllerMP*))(Il2CppBase() + 0x277E364))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TacticalMapControllerMP*))(Il2CppBase() + 0x277E5F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalMapControllerMP*))(Il2CppBase() + 0x277E698))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShowView(uintptr_t P0) {
		return ((T (*)(TacticalMapControllerMP*, uintptr_t))(Il2CppBase() + 0x277E69C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TacticalMapControllerMP*))(Il2CppBase() + 0x277E8F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TacticalMapControllerMP*))(Il2CppBase() + 0x277E8FC))(this);
	}

};

}
