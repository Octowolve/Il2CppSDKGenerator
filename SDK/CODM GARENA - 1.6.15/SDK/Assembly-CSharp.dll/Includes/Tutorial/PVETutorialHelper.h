#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class PVETutorialHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "PVETutorialHelper"));
	}

	template <typename T = uintptr_t> static T& m_CurrentTranf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_CurrenGuideTranform() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B07548))(0);
	}

};

}
