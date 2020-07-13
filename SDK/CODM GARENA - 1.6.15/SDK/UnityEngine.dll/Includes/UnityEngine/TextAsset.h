#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TextAsset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "TextAsset"));
	}


	template <typename T = Il2CppString*> T get_text() {
		return ((T (*)(TextAsset*))(Il2CppBase() + 0x4D29AD0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_bytes() {
		return ((T (*)(TextAsset*))(Il2CppBase() + 0x4D29B68))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(TextAsset*))(Il2CppBase() + 0x4D29C00))(this);
	}

};

}
