#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PartialInputStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "", "PartialInputStream"));
	}

	template <typename T = uintptr_t> T& zipFile_() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& baseStream_() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int64_t> T& start_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& length_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& readPos_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& end_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T ReadByte() {
		return ((T (*)(PartialInputStream*))(Il2CppBase() + 0x4A86280))(this);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(PartialInputStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A863B0))(this, buffer, offset, count);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(PartialInputStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A86554))(this, buffer, offset, count);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(PartialInputStream*, int64_t))(Il2CppBase() + 0x4A865E8))(this, value);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(PartialInputStream*, int64_t, uintptr_t))(Il2CppBase() + 0x4A8667C))(this, offset, origin);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(PartialInputStream*))(Il2CppBase() + 0x4A86804))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(PartialInputStream*))(Il2CppBase() + 0x4A86808))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(PartialInputStream*, int64_t))(Il2CppBase() + 0x4A8681C))(this, value);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(PartialInputStream*))(Il2CppBase() + 0x4A86970))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(PartialInputStream*))(Il2CppBase() + 0x4A86978))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(PartialInputStream*))(Il2CppBase() + 0x4A86980))(this);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(PartialInputStream*))(Il2CppBase() + 0x4A86988))(this);
	}

};

}
