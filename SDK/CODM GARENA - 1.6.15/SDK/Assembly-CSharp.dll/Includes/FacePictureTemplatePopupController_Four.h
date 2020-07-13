#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FacePictureTemplatePopupControllerFour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FacePictureTemplatePopupController_Four"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FacePictureTemplatePopupControllerFour*))(Il2CppBase() + 0x4BE3C80))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FacePictureTemplatePopupControllerFour*))(Il2CppBase() + 0x4BE3D24))(this);
	}

};

}
