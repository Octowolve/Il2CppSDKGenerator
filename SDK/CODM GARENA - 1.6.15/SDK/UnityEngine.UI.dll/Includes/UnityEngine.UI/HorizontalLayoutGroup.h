#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class HorizontalLayoutGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "HorizontalLayoutGroup"));
	}


	template <typename T = void> T CalculateLayoutInputHorizontal() {
		return ((T (*)(HorizontalLayoutGroup*))(Il2CppBase() + 0x3D1CB78))(this);
	}
	template <typename T = void> T CalculateLayoutInputVertical() {
		return ((T (*)(HorizontalLayoutGroup*))(Il2CppBase() + 0x3D1CEF8))(this);
	}
	template <typename T = void> T SetLayoutHorizontal() {
		return ((T (*)(HorizontalLayoutGroup*))(Il2CppBase() + 0x3D1CF04))(this);
	}
	template <typename T = void> T SetLayoutVertical() {
		return ((T (*)(HorizontalLayoutGroup*))(Il2CppBase() + 0x3D1D678))(this);
	}

};

}
