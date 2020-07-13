#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UTF8Decoder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "UTF8Decoder"));
	}

	template <typename T = uint32_t> T& leftOverBits() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& leftOverCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T GetChars(Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, int32_t byteCount, Il2CppArray<uintptr_t>* chars, int32_t charIndex) {
		return ((T (*)(UTF8Decoder*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4D876AC))(this, bytes, byteIndex, byteCount, chars, charIndex);
	}

};

}
