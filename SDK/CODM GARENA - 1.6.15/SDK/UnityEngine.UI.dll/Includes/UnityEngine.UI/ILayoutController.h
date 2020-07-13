#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class ILayoutController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "ILayoutController"));
	}


	template <typename T = void> T SetLayoutHorizontal() {
		return ((T (*)(ILayoutController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetLayoutVertical() {
		return ((T (*)(ILayoutController*))(Il2CppBase() + 0x0))(this);
	}

};

}
