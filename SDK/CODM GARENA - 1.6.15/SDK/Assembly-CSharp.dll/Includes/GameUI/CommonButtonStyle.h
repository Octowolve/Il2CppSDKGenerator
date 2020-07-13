#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CommonButtonStyle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CommonButtonStyle"));
	}

	template <typename T = uintptr_t> T& m_TextColor() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_TextEffect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& m_TextEffectDistance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_TextEffectColor() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_TextGradientEnable() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_TextGradientColorTop() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_TextGradientColorBottom() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& m_BackgroundSpriteName() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T ApplyStyle(uintptr_t style, uintptr_t label, uintptr_t background, uintptr_t button) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DF0BDC))(0, style, label, background, button);
	}

};

}
