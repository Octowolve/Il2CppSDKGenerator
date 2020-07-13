#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class VerticalLayoutGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "VerticalLayoutGroup"));
	}


	template <typename T = void> T CalculateLayoutInputHorizontal() {
		return ((T (*)(VerticalLayoutGroup*))(Il2CppBase() + 0x4E40F50))(this);
	}
	template <typename T = void> T CalculateLayoutInputVertical() {
		return ((T (*)(VerticalLayoutGroup*))(Il2CppBase() + 0x4E40F7C))(this);
	}
	template <typename T = void> T SetLayoutHorizontal() {
		return ((T (*)(VerticalLayoutGroup*))(Il2CppBase() + 0x4E40F8C))(this);
	}
	template <typename T = void> T SetLayoutVertical() {
		return ((T (*)(VerticalLayoutGroup*))(Il2CppBase() + 0x4E40F9C))(this);
	}

};

}
