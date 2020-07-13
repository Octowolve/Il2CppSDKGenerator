#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class ILayoutElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "ILayoutElement"));
	}


	template <typename T = void> T CalculateLayoutInputHorizontal() {
		return ((T (*)(ILayoutElement*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T CalculateLayoutInputVertical() {
		return ((T (*)(ILayoutElement*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_minWidth() {
		return ((T (*)(ILayoutElement*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_preferredWidth() {
		return ((T (*)(ILayoutElement*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_flexibleWidth() {
		return ((T (*)(ILayoutElement*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_minHeight() {
		return ((T (*)(ILayoutElement*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_preferredHeight() {
		return ((T (*)(ILayoutElement*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_flexibleHeight() {
		return ((T (*)(ILayoutElement*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_layoutPriority() {
		return ((T (*)(ILayoutElement*))(Il2CppBase() + 0x0))(this);
	}

};

}
