#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialFinalTargetDisplay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialFinalTargetDisplay"));
	}

	template <typename T = Il2CppString*> T& ID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& TutorialFinalTargetDisplayType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Words() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& ZOffset() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_TargetDisplayHUD() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(TutorialFinalTargetDisplay*))(Il2CppBase() + 0x423C478))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TutorialFinalTargetDisplay*))(Il2CppBase() + 0x423C794))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(TutorialFinalTargetDisplay*))(Il2CppBase() + 0x423C528))(this);
	}
	template <typename T = void> T UnShow() {
		return ((T (*)(TutorialFinalTargetDisplay*))(Il2CppBase() + 0x423C838))(this);
	}

};

}
