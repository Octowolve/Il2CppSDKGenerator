#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class TeamTopLeftController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "TeamTopLeftController"));
	}

	template <typename T = uintptr_t> T& view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRetrunToFrontEndBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTitleLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TeamTopLeftController*))(Il2CppBase() + 0x386A15C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TeamTopLeftController*))(Il2CppBase() + 0x386A268))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TeamTopLeftController*))(Il2CppBase() + 0x386A3B8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TeamTopLeftController*))(Il2CppBase() + 0x386A508))(this);
	}
	template <typename T = void> T OnRetrunToFrontEndBtn() {
		return ((T (*)(TeamTopLeftController*))(Il2CppBase() + 0x386A5A8))(this);
	}
	template <typename T = void> T SetTitleLabel(Il2CppString* str) {
		return ((T (*)(TeamTopLeftController*, Il2CppString*))(Il2CppBase() + 0x386A68C))(this, str);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TeamTopLeftController*))(Il2CppBase() + 0x386A75C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TeamTopLeftController*))(Il2CppBase() + 0x386A764))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TeamTopLeftController*))(Il2CppBase() + 0x386A76C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TeamTopLeftController*))(Il2CppBase() + 0x386A774))(this);
	}

};

}
