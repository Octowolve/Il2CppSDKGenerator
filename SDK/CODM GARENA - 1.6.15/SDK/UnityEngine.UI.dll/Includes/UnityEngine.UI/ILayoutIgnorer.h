#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class ILayoutIgnorer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "ILayoutIgnorer"));
	}


	template <typename T = bool> T get_ignoreLayout() {
		return ((T (*)(ILayoutIgnorer*))(Il2CppBase() + 0x0))(this);
	}

};

}
