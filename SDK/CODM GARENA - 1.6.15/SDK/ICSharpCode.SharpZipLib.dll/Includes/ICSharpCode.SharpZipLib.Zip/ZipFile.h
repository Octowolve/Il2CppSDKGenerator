#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip {

class ZipFile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip", "ZipFile"));
	}

	template <typename T = uintptr_t> T& KeysRequired() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isDisposed_() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& comment_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& rawPassword_() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& baseStream_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isStreamOwner() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int64_t> T& offsetOfFirstEntry() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& entries_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& key() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& isNewArchive_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& useZip64_() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& updates_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& updateIndex_() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& archiveStorage_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& updateDataSource_() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& bufferSize_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& updateEntryFactory_() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T OnKeysRequired(Il2CppString* fileName) {
		return ((T (*)(ZipFile*, Il2CppString*))(Il2CppBase() + 0x4A823BC))(this, fileName);
	}
	template <typename T = void> T set_Password(Il2CppString* value) {
		return ((T (*)(ZipFile*, Il2CppString*))(Il2CppBase() + 0x4A7DC98))(this, value);
	}
	template <typename T = bool> T get_HaveKeys() {
		return ((T (*)(ZipFile*))(Il2CppBase() + 0x4A8255C))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(ZipFile*))(Il2CppBase() + 0x4A83278))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(ZipFile*))(Il2CppBase() + 0x4A832E4))(this);
	}
	template <typename T = bool> T get_IsStreamOwner() {
		return ((T (*)(ZipFile*))(Il2CppBase() + 0x4A8330C))(this);
	}
	template <typename T = void> T set_IsStreamOwner(bool value) {
		return ((T (*)(ZipFile*, bool))(Il2CppBase() + 0x4A7DDA4))(this, value);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(ZipFile*))(Il2CppBase() + 0x4A7DDAC))(this);
	}
	template <typename T = int32_t> T FindEntry(Il2CppString* name, bool ignoreCase) {
		return ((T (*)(ZipFile*, Il2CppString*, bool))(Il2CppBase() + 0x4A83340))(this, name, ignoreCase);
	}
	template <typename T = uintptr_t> T GetInputStream(uintptr_t entry) {
		return ((T (*)(ZipFile*, uintptr_t))(Il2CppBase() + 0x4A7EA9C))(this, entry);
	}
	template <typename T = uintptr_t> T GetInputStream_1(int64_t entryIndex) {
		return ((T (*)(ZipFile*, int64_t))(Il2CppBase() + 0x4A834D8))(this, entryIndex);
	}
	template <typename T = int64_t> T TestLocalHeader(uintptr_t entry, uintptr_t tests) {
		return ((T (*)(ZipFile*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A84084))(this, entry, tests);
	}
	template <typename T = void> T PostUpdateCleanup() {
		return ((T (*)(ZipFile*))(Il2CppBase() + 0x4A85ACC))(this);
	}
	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ZipFile*))(Il2CppBase() + 0x4A85BCC))(this);
	}
	template <typename T = void> T DisposeInternal(bool disposing) {
		return ((T (*)(ZipFile*, bool))(Il2CppBase() + 0x4A83134))(this, disposing);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(ZipFile*, bool))(Il2CppBase() + 0x4A85BF4))(this, disposing);
	}
	template <typename T = uint16_t> T ReadLEUshort() {
		return ((T (*)(ZipFile*))(Il2CppBase() + 0x4A85790))(this);
	}
	template <typename T = uint32_t> T ReadLEUint() {
		return ((T (*)(ZipFile*))(Il2CppBase() + 0x4A8576C))(this);
	}
	template <typename T = uint64_t> T ReadLEUlong() {
		return ((T (*)(ZipFile*))(Il2CppBase() + 0x4A85BFC))(this);
	}
	template <typename T = int64_t> T LocateBlockWithSignature(int32_t signature, int64_t endLocation, int32_t minimumBlockSize, int32_t maximumVariableData) {
		return ((T (*)(ZipFile*, int32_t, int64_t, int32_t, int32_t))(Il2CppBase() + 0x4A85C3C))(this, signature, endLocation, minimumBlockSize, maximumVariableData);
	}
	template <typename T = void> T ReadEntries() {
		return ((T (*)(ZipFile*))(Il2CppBase() + 0x4A8256C))(this);
	}
	template <typename T = int64_t> T LocateEntry(uintptr_t entry) {
		return ((T (*)(ZipFile*, uintptr_t))(Il2CppBase() + 0x4A838D8))(this, entry);
	}
	template <typename T = uintptr_t> T CreateAndInitDecryptionStream(uintptr_t baseStream, uintptr_t entry) {
		return ((T (*)(ZipFile*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A839E8))(this, baseStream, entry);
	}
	template <typename T = void> static T CheckClassicPassword(uintptr_t classicCryptoStream, uintptr_t entry) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A860F8))(0, classicCryptoStream, entry);
	}

};

}
