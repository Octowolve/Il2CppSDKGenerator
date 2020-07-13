#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class IClipper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "IClipper"));
	}


	template <typename T = void> T PerformClipping() {
		return ((T (*)(IClipper*))(Il2CppBase() + 0x0))(this);
	}

};

}
