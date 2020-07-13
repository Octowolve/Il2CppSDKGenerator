#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class FFAPVPScorePanelViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "FFAPVPScorePanelViewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& MAX_SHOW_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScoreDescLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDeathDescLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FFAPVPScorePanelViewController*))(Il2CppBase() + 0x347B974))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FFAPVPScorePanelViewController*))(Il2CppBase() + 0x347BA18))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(FFAPVPScorePanelViewController*))(Il2CppBase() + 0x347BB24))(this);
	}
	template <typename T = void> T SetScoreDescLabel(Il2CppString* desc) {
		return ((T (*)(FFAPVPScorePanelViewController*, Il2CppString*))(Il2CppBase() + 0x347BCCC))(this, desc);
	}
	template <typename T = void> T SetDeathDescLabel(Il2CppString* desc) {
		return ((T (*)(FFAPVPScorePanelViewController*, Il2CppString*))(Il2CppBase() + 0x347BED8))(this, desc);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FFAPVPScorePanelViewController*))(Il2CppBase() + 0x347C0E4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FFAPVPScorePanelViewController*))(Il2CppBase() + 0x347C2EC))(this);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(FFAPVPScorePanelViewController*))(Il2CppBase() + 0x347C4F4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FFAPVPScorePanelViewController*))(Il2CppBase() + 0x347C5C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FFAPVPScorePanelViewController*))(Il2CppBase() + 0x347C5C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FFAPVPScorePanelViewController*))(Il2CppBase() + 0x347C5D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FFAPVPScorePanelViewController*))(Il2CppBase() + 0x347C5D8))(this);
	}

};

}
