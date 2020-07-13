#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIAnimationSequence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIAnimationSequence"));
	}

	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& paramters() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& paramType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_bFinish() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Play() {
		return ((T (*)(UIAnimationSequence*))(Il2CppBase() + 0x29C5B08))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(UIAnimationSequence*))(Il2CppBase() + 0x29C5C8C))(this);
	}
	template <typename T = bool> T get_bFinish() {
		return ((T (*)(UIAnimationSequence*))(Il2CppBase() + 0x29C5DAC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIAnimationSequence*))(Il2CppBase() + 0x29C5DB4))(this);
	}

};

}
