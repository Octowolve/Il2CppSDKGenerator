#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip {

class ZipOutputStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip", "ZipOutputStream"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& entries() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& crc() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& curEntry() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& defaultCompressionLevel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& curMethod() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int64_t> T& size() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int64_t> T& offset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& zipComment() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& patchEntryHeader() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int64_t> T& crcPatchPos() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int64_t> T& sizePatchPos() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& useZip64_() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T SetLevel(int32_t level) {
		return ((T (*)(ZipOutputStream*, int32_t))(Il2CppBase() + 0x4A87F38))(this, level);
	}
	template <typename T = void> T WriteLeShort(int32_t value) {
		return ((T (*)(ZipOutputStream*, int32_t))(Il2CppBase() + 0x4A87F70))(this, value);
	}
	template <typename T = void> T WriteLeInt(int32_t value) {
		return ((T (*)(ZipOutputStream*, int32_t))(Il2CppBase() + 0x4A87FD0))(this, value);
	}
	template <typename T = void> T WriteLeLong(int64_t value) {
		return ((T (*)(ZipOutputStream*, int64_t))(Il2CppBase() + 0x4A87FF4))(this, value);
	}
	template <typename T = void> T PutNextEntry(uintptr_t entry) {
		return ((T (*)(ZipOutputStream*, uintptr_t))(Il2CppBase() + 0x4A88038))(this, entry);
	}
	template <typename T = void> T CloseEntry() {
		return ((T (*)(ZipOutputStream*))(Il2CppBase() + 0x4A889FC))(this);
	}
	template <typename T = void> T WriteEncryptionHeader(int64_t crcValue) {
		return ((T (*)(ZipOutputStream*, int64_t))(Il2CppBase() + 0x4A89AA0))(this, crcValue);
	}
	template <typename T = void> static T AddExtraDataAES(uintptr_t entry, uintptr_t extraData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A89984))(0, entry, extraData);
	}
	template <typename T = void> T WriteAESHeader(uintptr_t entry) {
		return ((T (*)(ZipOutputStream*, uintptr_t))(Il2CppBase() + 0x4A899F8))(this, entry);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(ZipOutputStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A89C10))(this, buffer, offset, count);
	}
	template <typename T = void> T CopyAndEncrypt(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(ZipOutputStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A89F0C))(this, buffer, offset, count);
	}
	template <typename T = void> T Finish() {
		return ((T (*)(ZipOutputStream*))(Il2CppBase() + 0x4A8A044))(this);
	}

};

}
