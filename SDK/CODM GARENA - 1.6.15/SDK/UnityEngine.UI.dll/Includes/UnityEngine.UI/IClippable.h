#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class IClippable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "IClippable"));
	}


	template <typename T = uintptr_t> T get_gameObject() {
		return ((T (*)(IClippable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T RecalculateClipping() {
		return ((T (*)(IClippable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_rectTransform() {
		return ((T (*)(IClippable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Cull(Il2CppRect clipRect, bool validRect) {
		return ((T (*)(IClippable*, Il2CppRect, bool))(Il2CppBase() + 0x0))(this, clipRect, validRect);
	}
	template <typename T = void> T SetClipRect(Il2CppRect value, bool validRect) {
		return ((T (*)(IClippable*, Il2CppRect, bool))(Il2CppBase() + 0x0))(this, value, validRect);
	}

};

}
