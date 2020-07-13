#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TextAreaAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "TextAreaAttribute"));
	}

	template <typename T = int32_t> T& minLines() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& maxLines() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
