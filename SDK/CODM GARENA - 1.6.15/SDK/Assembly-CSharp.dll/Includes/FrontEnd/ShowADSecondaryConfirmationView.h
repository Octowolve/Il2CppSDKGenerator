#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class ShowADSecondaryConfirmationView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "ShowADSecondaryConfirmationView"));
	}

	template <typename T = uintptr_t> T& mGrid() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& mScrollView() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& BtnWatch() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& LabelProgress() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mRawardList() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mRawardItemList() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ShowADSecondaryConfirmationView*))(Il2CppBase() + 0x385BEBC))(this);
	}
	template <typename T = void> T SetData() {
		return ((T (*)(ShowADSecondaryConfirmationView*))(Il2CppBase() + 0x385BC0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ShowADSecondaryConfirmationView*))(Il2CppBase() + 0x385BFA4))(this);
	}

};

}
