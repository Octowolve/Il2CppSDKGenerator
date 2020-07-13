#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip.Compression.Streams {

class StreamManipulator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip.Compression.Streams", "StreamManipulator"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& window_() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& windowStart_() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& windowEnd_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& buffer_() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& bitsInBuffer_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T PeekBits(int32_t bitCount) {
		return ((T (*)(StreamManipulator*, int32_t))(Il2CppBase() + 0x4A75E3C))(this, bitCount);
	}
	template <typename T = bool> T TryGetBits(int32_t bitCount, uintptr_t output, int32_t outputOffset) {
		return ((T (*)(StreamManipulator*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4A78EE4))(this, bitCount, output, outputOffset);
	}
	template <typename T = bool> T TryGetBits_1(int32_t bitCount, Il2CppArray<uintptr_t>* array, int32_t index) {
		return ((T (*)(StreamManipulator*, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4A78F3C))(this, bitCount, array, index);
	}
	template <typename T = void> T DropBits(int32_t bitCount) {
		return ((T (*)(StreamManipulator*, int32_t))(Il2CppBase() + 0x4A75F3C))(this, bitCount);
	}
	template <typename T = int32_t> T get_AvailableBits() {
		return ((T (*)(StreamManipulator*))(Il2CppBase() + 0x4A79D18))(this);
	}
	template <typename T = int32_t> T get_AvailableBytes() {
		return ((T (*)(StreamManipulator*))(Il2CppBase() + 0x4A7C0E0))(this);
	}
	template <typename T = void> T SkipToByteBoundary() {
		return ((T (*)(StreamManipulator*))(Il2CppBase() + 0x4A774FC))(this);
	}
	template <typename T = bool> T get_IsNeedingInput() {
		return ((T (*)(StreamManipulator*))(Il2CppBase() + 0x4A77748))(this);
	}
	template <typename T = int32_t> T CopyBytes(Il2CppArray<uintptr_t>* output, int32_t offset, int32_t length) {
		return ((T (*)(StreamManipulator*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A7C0F8))(this, output, offset, length);
	}
	template <typename T = void> T SetInput(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(StreamManipulator*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A77AA8))(this, buffer, offset, count);
	}

};

}
