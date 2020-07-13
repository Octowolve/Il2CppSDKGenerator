#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Encryption {

class ZipAESStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Encryption", "ZipAESStream"));
	}

	template <typename T = uintptr_t> T& _stream() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _transform() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _slideBuffer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _slideBufStartPos() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _slideBufFreePos() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _blockAndAuth() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(ZipAESStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A6E4F4))(this, buffer, offset, count);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(ZipAESStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A6EB4C))(this, buffer, offset, count);
	}

};

}
