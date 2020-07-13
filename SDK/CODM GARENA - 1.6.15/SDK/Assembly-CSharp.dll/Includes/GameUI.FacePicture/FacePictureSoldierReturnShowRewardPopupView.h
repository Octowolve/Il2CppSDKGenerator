#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.FacePicture {

class FacePictureSoldierReturnShowRewardPopupView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.FacePicture", "FacePictureSoldierReturnShowRewardPopupView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& group3ItemUI() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& group4ItemUI() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& group3Container() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& group4Container() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& group3TitleLabel() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& group4TitleLabel() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& group3ContentLabel() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& group4ContentLabel() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& group3BtnLabel() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& group4BtnLabel() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTextureURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T GetTextureURL(uintptr_t data, Il2CppArray<uintptr_t>** cdn, Il2CppArray<uintptr_t>** local) {
		return ((T (*)(FacePictureSoldierReturnShowRewardPopupView*, uintptr_t, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x470C108))(this, data, cdn, local);
	}
	template <typename T = void> T xLuaBaseProxy_GetTextureURL(uintptr_t P0, Il2CppArray<uintptr_t>** P1, Il2CppArray<uintptr_t>** P2) {
		return ((T (*)(FacePictureSoldierReturnShowRewardPopupView*, uintptr_t, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x470C200))(this, P0, P1, P2);
	}

};

}
