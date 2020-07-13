#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class StreamedFileAssetStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "StreamedFileAssetStream"));
	}

	template <typename T = uintptr_t> T& streamedFileAsset() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& fileHandle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& closed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& position() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(StreamedFileAssetStream*, bool))(Il2CppBase() + 0x4E88F78))(this, disposing);
	}
	template <typename T = void> T ThrowIfDisposed() {
		return ((T (*)(StreamedFileAssetStream*))(Il2CppBase() + 0x4E88FB4))(this);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(StreamedFileAssetStream*))(Il2CppBase() + 0x4E89070))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(StreamedFileAssetStream*))(Il2CppBase() + 0x4E89078))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(StreamedFileAssetStream*))(Il2CppBase() + 0x4E89080))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(StreamedFileAssetStream*))(Il2CppBase() + 0x4E89088))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(StreamedFileAssetStream*))(Il2CppBase() + 0x4E890B0))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(StreamedFileAssetStream*, int64_t))(Il2CppBase() + 0x4E890B8))(this, value);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(StreamedFileAssetStream*))(Il2CppBase() + 0x4E8917C))(this);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(StreamedFileAssetStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4E89210))(this, buffer, offset, count);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(StreamedFileAssetStream*, int64_t, uintptr_t))(Il2CppBase() + 0x4E8952C))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(StreamedFileAssetStream*, int64_t))(Il2CppBase() + 0x4E895D4))(this, value);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(StreamedFileAssetStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4E89668))(this, buffer, offset, count);
	}

};

}
