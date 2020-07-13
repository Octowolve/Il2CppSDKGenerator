#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ForwardingDecoder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "ForwardingDecoder"));
	}

	template <typename T = uintptr_t> T& encoding() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T GetChars(Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, int32_t byteCount, Il2CppArray<uintptr_t>* chars, int32_t charIndex) {
		return ((T (*)(ForwardingDecoder*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42A0664))(this, bytes, byteIndex, byteCount, chars, charIndex);
	}

};

}
