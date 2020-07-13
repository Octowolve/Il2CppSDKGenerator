#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HeadData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "HeadData"));
	}

	template <typename T = unsigned char> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& tag() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T clear() {
		return ((T (*)(HeadData*))(Il2CppBase() + 0x4F8FC1C))(this);
	}

};

}
