#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class FreeOBView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "FreeOBView"));
	}

	template <typename T = uintptr_t> T& PackBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CamViewBtnList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& m_IsShowingBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(FreeOBView*))(Il2CppBase() + 0x470E4A0))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(FreeOBView*))(Il2CppBase() + 0x470E4A8))(this);
	}
	template <typename T = void> T TriggerTween() {
		return ((T (*)(FreeOBView*))(Il2CppBase() + 0x470E4B4))(this);
	}

};

}
