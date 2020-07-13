#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip.Compression {

class Deflater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip.Compression", "Deflater"));
	}

	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& noZlibHeaderOrFooter() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& totalOut() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& pending() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& engine() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Deflater*))(Il2CppBase() + 0x4A6FA60))(this);
	}
	template <typename T = int64_t> T get_TotalOut() {
		return ((T (*)(Deflater*))(Il2CppBase() + 0x4A6FBC0))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(Deflater*))(Il2CppBase() + 0x4A6FBC8))(this);
	}
	template <typename T = void> T Finish() {
		return ((T (*)(Deflater*))(Il2CppBase() + 0x4A6FBD8))(this);
	}
	template <typename T = bool> T get_IsFinished() {
		return ((T (*)(Deflater*))(Il2CppBase() + 0x4A6FBE8))(this);
	}
	template <typename T = bool> T get_IsNeedingInput() {
		return ((T (*)(Deflater*))(Il2CppBase() + 0x4A6FC44))(this);
	}
	template <typename T = void> T SetInput(Il2CppArray<uintptr_t>* input, int32_t offset, int32_t count) {
		return ((T (*)(Deflater*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A6FC94))(this, input, offset, count);
	}
	template <typename T = void> T SetLevel(int32_t level) {
		return ((T (*)(Deflater*, int32_t))(Il2CppBase() + 0x4A6F968))(this, level);
	}
	template <typename T = void> T SetStrategy(uintptr_t strategy) {
		return ((T (*)(Deflater*, uintptr_t))(Il2CppBase() + 0x4A6F944))(this, strategy);
	}
	template <typename T = int32_t> T Deflate(Il2CppArray<uintptr_t>* output, int32_t offset, int32_t length) {
		return ((T (*)(Deflater*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A70368))(this, output, offset, length);
	}

};

}
