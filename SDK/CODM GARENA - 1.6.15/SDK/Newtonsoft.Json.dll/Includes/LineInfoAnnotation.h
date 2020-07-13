#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LineInfoAnnotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "LineInfoAnnotation"));
	}

	template <typename T = int32_t> T& LineNumber() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& LinePosition() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
