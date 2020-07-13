#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class Base64Encoder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "Base64Encoder"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _charsLine() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _writer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _leftOverBytes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _leftOverBytesCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Encode(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count) {
		return ((T (*)(Base64Encoder*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4DE2690))(this, buffer, index, count);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(Base64Encoder*))(Il2CppBase() + 0x4DE2B4C))(this);
	}
	template <typename T = void> T WriteChars(Il2CppArray<uintptr_t>* chars, int32_t index, int32_t count) {
		return ((T (*)(Base64Encoder*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4DE2B0C))(this, chars, index, count);
	}

};

}
