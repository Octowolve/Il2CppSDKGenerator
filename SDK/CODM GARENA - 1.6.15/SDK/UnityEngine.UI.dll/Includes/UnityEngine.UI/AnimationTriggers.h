#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class AnimationTriggers
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "AnimationTriggers"));
	}

	template <typename T = Il2CppString*> static T& kDefaultNormalAnimName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kDefaultSelectedAnimName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kDefaultPressedAnimName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kDefaultDisabledAnimName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_NormalTrigger() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_HighlightedTrigger() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_PressedTrigger() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_DisabledTrigger() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppString*> T get_normalTrigger() {
		return ((T (*)(AnimationTriggers*))(Il2CppBase() + 0x3D092C4))(this);
	}
	template <typename T = Il2CppString*> T get_highlightedTrigger() {
		return ((T (*)(AnimationTriggers*))(Il2CppBase() + 0x3D092CC))(this);
	}
	template <typename T = Il2CppString*> T get_pressedTrigger() {
		return ((T (*)(AnimationTriggers*))(Il2CppBase() + 0x3D092D4))(this);
	}
	template <typename T = Il2CppString*> T get_disabledTrigger() {
		return ((T (*)(AnimationTriggers*))(Il2CppBase() + 0x3D092DC))(this);
	}

};

}
