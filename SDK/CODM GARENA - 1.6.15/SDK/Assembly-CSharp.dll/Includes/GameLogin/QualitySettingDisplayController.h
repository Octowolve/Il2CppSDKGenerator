#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class QualitySettingDisplayController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "QualitySettingDisplayController"));
	}

	template <typename T = uintptr_t> T& view() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(QualitySettingDisplayController*))(Il2CppBase() + 0x252EEE8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(QualitySettingDisplayController*))(Il2CppBase() + 0x252EF8C))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(QualitySettingDisplayController*))(Il2CppBase() + 0x252F098))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(QualitySettingDisplayController*))(Il2CppBase() + 0x252F8AC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(QualitySettingDisplayController*))(Il2CppBase() + 0x252F9D4))(this);
	}
	template <typename T = void> T Refresh(uintptr_t _) {
		return ((T (*)(QualitySettingDisplayController*, uintptr_t))(Il2CppBase() + 0x252FA90))(this, _);
	}
	template <typename T = void> T RefreshInternal() {
		return ((T (*)(QualitySettingDisplayController*))(Il2CppBase() + 0x252F148))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(QualitySettingDisplayController*))(Il2CppBase() + 0x252FC58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(QualitySettingDisplayController*))(Il2CppBase() + 0x252FC60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(QualitySettingDisplayController*))(Il2CppBase() + 0x252FC68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(QualitySettingDisplayController*))(Il2CppBase() + 0x252FC70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(QualitySettingDisplayController*))(Il2CppBase() + 0x252FC78))(this);
	}

};

}
