#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialMainController"));
	}

	template <typename T = uintptr_t> T& m_View() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TutorialMainController*))(Il2CppBase() + 0x423E308))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TutorialMainController*))(Il2CppBase() + 0x423E3AC))(this);
	}
	template <typename T = void> T OnLeftBtnClick() {
		return ((T (*)(TutorialMainController*))(Il2CppBase() + 0x423E910))(this);
	}
	template <typename T = void> T OnRightBtnClick() {
		return ((T (*)(TutorialMainController*))(Il2CppBase() + 0x423EB3C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TutorialMainController*))(Il2CppBase() + 0x423EDE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TutorialMainController*))(Il2CppBase() + 0x423EDF0))(this);
	}

};

}
