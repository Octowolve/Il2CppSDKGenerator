#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class StreamedFileAsset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "StreamedFileAsset"));
	}


	template <typename T = uint64_t> T get_size() {
		return ((T (*)(StreamedFileAsset*))(Il2CppBase() + 0x4E88A80))(this);
	}
	template <typename T = uint32_t> T LoadData(Il2CppArray<uintptr_t>* buffer, uint32_t offset, uint64_t position, uint32_t size, uintptr_t fileHandle) {
		return ((T (*)(StreamedFileAsset*, Il2CppArray<uintptr_t>*, uint32_t, uint64_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4E88B18))(this, buffer, offset, position, size, fileHandle);
	}
	template <typename T = bool> static T CreateFileHandle(uintptr_t streamedFileAsset, uintptr_t* fileHandle) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4E88BC0))(0, streamedFileAsset, fileHandle);
	}
	template <typename T = void> static T ReleaseFileHandle(uintptr_t fileHandle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E88C60))(0, fileHandle);
	}
	template <typename T = uintptr_t> T CreateStream() {
		return ((T (*)(StreamedFileAsset*))(Il2CppBase() + 0x4E88CF8))(this);
	}

};

}
