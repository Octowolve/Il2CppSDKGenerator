#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Checksum {

class Crc32
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Checksum", "Crc32"));
	}

	template <typename T = uint32_t> static T& crcInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& crcXor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& crcTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uint32_t> T& checkValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uint32_t> static T ComputeCrc32(uint32_t oldCrc, unsigned char bval) {
		return ((T (*)(void *, uint32_t, unsigned char))(Il2CppBase() + 0x4A6A28C))(0, oldCrc, bval);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Crc32*))(Il2CppBase() + 0x4A6A3A0))(this);
	}
	template <typename T = int64_t> T get_Value() {
		return ((T (*)(Crc32*))(Il2CppBase() + 0x4A6A458))(this);
	}
	template <typename T = void> T Update(int32_t bval) {
		return ((T (*)(Crc32*, int32_t))(Il2CppBase() + 0x4A6A518))(this, bval);
	}
	template <typename T = void> T Update_1(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(Crc32*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A6A618))(this, buffer);
	}
	template <typename T = void> T Update_2(void* segment) {
		return ((T (*)(Crc32*, void*))(Il2CppBase() + 0x4A6A730))(this, segment);
	}

};

}
