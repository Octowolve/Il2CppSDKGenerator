#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class IMaskable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "IMaskable"));
	}


	template <typename T = void> T RecalculateMasking() {
		return ((T (*)(IMaskable*))(Il2CppBase() + 0x0))(this);
	}

};

}
