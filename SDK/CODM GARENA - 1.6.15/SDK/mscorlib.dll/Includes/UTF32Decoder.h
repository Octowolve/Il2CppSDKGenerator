#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UTF32Decoder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "UTF32Decoder"));
	}

	template <typename T = bool> T& bigEndian() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& leftOverByte() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& leftOverLength() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T GetChars(Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, int32_t byteCount, Il2CppArray<uintptr_t>* chars, int32_t charIndex) {
		return ((T (*)(UTF32Decoder*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42A83BC))(this, bytes, byteIndex, byteCount, chars, charIndex);
	}

};

}
