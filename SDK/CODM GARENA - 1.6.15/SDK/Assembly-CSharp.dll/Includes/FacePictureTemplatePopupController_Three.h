#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FacePictureTemplatePopupControllerThree
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FacePictureTemplatePopupController_Three"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FacePictureTemplatePopupControllerThree*))(Il2CppBase() + 0x4BE4B60))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FacePictureTemplatePopupControllerThree*))(Il2CppBase() + 0x4BE4C04))(this);
	}

};

}
