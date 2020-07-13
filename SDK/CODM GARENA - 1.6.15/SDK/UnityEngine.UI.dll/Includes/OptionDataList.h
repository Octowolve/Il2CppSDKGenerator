#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OptionDataList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "OptionDataList"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_Options() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_options() {
		return ((T (*)(OptionDataList*))(Il2CppBase() + 0x3D0F960))(this);
	}
	template <typename T = void> T set_options(Il2CppList<uintptr_t>* value) {
		return ((T (*)(OptionDataList*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3D0F994))(this, value);
	}

};

}
