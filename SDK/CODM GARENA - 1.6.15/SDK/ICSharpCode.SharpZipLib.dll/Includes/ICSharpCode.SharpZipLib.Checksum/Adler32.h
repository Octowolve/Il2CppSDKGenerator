#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Checksum {

class Adler32
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Checksum", "Adler32"));
	}

	template <typename T = uint32_t> static T& BASE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> T& checkValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Adler32*))(Il2CppBase() + 0x4A69FC8))(this);
	}
	template <typename T = int64_t> T get_Value() {
		return ((T (*)(Adler32*))(Il2CppBase() + 0x4A69FD4))(this);
	}
	template <typename T = void> T Update(void* segment) {
		return ((T (*)(Adler32*, void*))(Il2CppBase() + 0x4A69FE0))(this, segment);
	}

};

}
