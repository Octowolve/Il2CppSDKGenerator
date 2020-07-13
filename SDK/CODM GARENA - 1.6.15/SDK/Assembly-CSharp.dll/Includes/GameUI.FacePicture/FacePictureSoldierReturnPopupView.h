#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.FacePicture {

class FacePictureSoldierReturnPopupView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.FacePicture", "FacePictureSoldierReturnPopupView"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DontCacheFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T DontCacheFlag() {
		return ((T (*)(FacePictureSoldierReturnPopupView*))(Il2CppBase() + 0x470A950))(this);
	}
	template <typename T = bool> T get_isUseLocalWhenCDNDownloading() {
		return ((T (*)(FacePictureSoldierReturnPopupView*))(Il2CppBase() + 0x470A9F0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_DontCacheFlag() {
		return ((T (*)(FacePictureSoldierReturnPopupView*))(Il2CppBase() + 0x470A9F8))(this);
	}

};

}
