#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip.Compression.Streams {

class OutputWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip.Compression.Streams", "OutputWindow"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& window() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& windowEnd() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& windowFilled() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(int32_t value) {
		return ((T (*)(OutputWindow*, int32_t))(Il2CppBase() + 0x4A7661C))(this, value);
	}
	template <typename T = void> T SlowRepeat(int32_t repStart, int32_t length, int32_t distance) {
		return ((T (*)(OutputWindow*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4A7C040))(this, repStart, length, distance);
	}
	template <typename T = void> T Repeat(int32_t length, int32_t distance) {
		return ((T (*)(OutputWindow*, int32_t, int32_t))(Il2CppBase() + 0x4A768E8))(this, length, distance);
	}
	template <typename T = int32_t> T CopyStored(uintptr_t input, int32_t length) {
		return ((T (*)(OutputWindow*, uintptr_t, int32_t))(Il2CppBase() + 0x4A77668))(this, input, length);
	}
	template <typename T = int32_t> T GetFreeSpace() {
		return ((T (*)(OutputWindow*))(Il2CppBase() + 0x4A76610))(this);
	}
	template <typename T = int32_t> T GetAvailable() {
		return ((T (*)(OutputWindow*))(Il2CppBase() + 0x4A78188))(this);
	}
	template <typename T = int32_t> T CopyOutput(Il2CppArray<uintptr_t>* output, int32_t offset, int32_t len) {
		return ((T (*)(OutputWindow*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A78040))(this, output, offset, len);
	}

};

}
