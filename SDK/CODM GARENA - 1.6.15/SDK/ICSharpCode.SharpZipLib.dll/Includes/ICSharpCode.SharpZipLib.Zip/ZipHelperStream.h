#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip {

class ZipHelperStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip", "ZipHelperStream"));
	}

	template <typename T = bool> T& isOwner_() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& stream_() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T set_IsStreamOwner(bool value) {
		return ((T (*)(ZipHelperStream*, bool))(Il2CppBase() + 0x4A7CFAC))(this, value);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(ZipHelperStream*))(Il2CppBase() + 0x4A86A20))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(ZipHelperStream*))(Il2CppBase() + 0x4A86A54))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(ZipHelperStream*))(Il2CppBase() + 0x4A86A88))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(ZipHelperStream*))(Il2CppBase() + 0x4A86ABC))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(ZipHelperStream*, int64_t))(Il2CppBase() + 0x4A86AF0))(this, value);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(ZipHelperStream*))(Il2CppBase() + 0x4A86B30))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(ZipHelperStream*))(Il2CppBase() + 0x4A86B64))(this);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(ZipHelperStream*, int64_t, uintptr_t))(Il2CppBase() + 0x4A86B98))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(ZipHelperStream*, int64_t))(Il2CppBase() + 0x4A86BE0))(this, value);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(ZipHelperStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A86C20))(this, buffer, offset, count);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(ZipHelperStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A86C60))(this, buffer, offset, count);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(ZipHelperStream*, bool))(Il2CppBase() + 0x4A86CA0))(this, disposing);
	}
	template <typename T = int64_t> T LocateBlockWithSignature(int32_t signature, int64_t endLocation, int32_t minimumBlockSize, int32_t maximumVariableData) {
		return ((T (*)(ZipHelperStream*, int32_t, int64_t, int32_t, int32_t))(Il2CppBase() + 0x4A85E04))(this, signature, endLocation, minimumBlockSize, maximumVariableData);
	}
	template <typename T = void> T WriteZip64EndOfCentralDirectory(int64_t noOfEntries, int64_t sizeEntries, int64_t centralDirOffset) {
		return ((T (*)(ZipHelperStream*, int64_t, int64_t, int64_t))(Il2CppBase() + 0x4A86CD4))(this, noOfEntries, sizeEntries, centralDirOffset);
	}
	template <typename T = void> T WriteEndOfCentralDirectory(int64_t noOfEntries, int64_t sizeEntries, int64_t startOfCentralDirectory, Il2CppArray<uintptr_t>* comment) {
		return ((T (*)(ZipHelperStream*, int64_t, int64_t, int64_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A86EB4))(this, noOfEntries, sizeEntries, startOfCentralDirectory, comment);
	}
	template <typename T = int32_t> T ReadLEShort() {
		return ((T (*)(ZipHelperStream*))(Il2CppBase() + 0x4A872C0))(this);
	}
	template <typename T = int32_t> T ReadLEInt() {
		return ((T (*)(ZipHelperStream*))(Il2CppBase() + 0x4A7C9B0))(this);
	}
	template <typename T = void> T WriteLEShort(int32_t value) {
		return ((T (*)(ZipHelperStream*, int32_t))(Il2CppBase() + 0x4A86E54))(this, value);
	}
	template <typename T = void> T WriteLEUshort(uint16_t value) {
		return ((T (*)(ZipHelperStream*, uint16_t))(Il2CppBase() + 0x4A87238))(this, value);
	}
	template <typename T = void> T WriteLEInt(int32_t value) {
		return ((T (*)(ZipHelperStream*, int32_t))(Il2CppBase() + 0x4A7CFB4))(this, value);
	}
	template <typename T = void> T WriteLEUint(uint32_t value) {
		return ((T (*)(ZipHelperStream*, uint32_t))(Il2CppBase() + 0x4A87298))(this, value);
	}
	template <typename T = void> T WriteLELong(int64_t value) {
		return ((T (*)(ZipHelperStream*, int64_t))(Il2CppBase() + 0x4A86E10))(this, value);
	}

};

}
