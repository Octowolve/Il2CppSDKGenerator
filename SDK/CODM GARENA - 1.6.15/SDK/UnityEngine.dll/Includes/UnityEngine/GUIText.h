#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUIText
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUIText"));
	}


	template <typename T = void> T set_text(Il2CppString* value) {
		return ((T (*)(GUIText*, Il2CppString*))(Il2CppBase() + 0x479F008))(this, value);
	}
	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(GUIText*))(Il2CppBase() + 0x479F0A8))(this);
	}

};

}
