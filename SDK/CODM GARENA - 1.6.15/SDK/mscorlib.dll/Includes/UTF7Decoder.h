#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UTF7Decoder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "UTF7Decoder"));
	}

	template <typename T = int32_t> T& leftOver() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T GetChars(Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, int32_t byteCount, Il2CppArray<uintptr_t>* chars, int32_t charIndex) {
		return ((T (*)(UTF7Decoder*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4D849C0))(this, bytes, byteIndex, byteCount, chars, charIndex);
	}

};

}
