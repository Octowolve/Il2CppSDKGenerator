#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class MonoSyncFileStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.IO", "MonoSyncFileStream"));
	}


	template <typename T = uintptr_t> T BeginWrite(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t cback, uintptr_t state) {
		return ((T (*)(MonoSyncFileStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B4EAC))(this, buffer, offset, count, cback, state);
	}
	template <typename T = void> T EndWrite(uintptr_t asyncResult) {
		return ((T (*)(MonoSyncFileStream*, uintptr_t))(Il2CppBase() + 0x42B51C4))(this, asyncResult);
	}
	template <typename T = uintptr_t> T BeginRead(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t cback, uintptr_t state) {
		return ((T (*)(MonoSyncFileStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B537C))(this, buffer, offset, count, cback, state);
	}
	template <typename T = int32_t> T EndRead(uintptr_t asyncResult) {
		return ((T (*)(MonoSyncFileStream*, uintptr_t))(Il2CppBase() + 0x42B5694))(this, asyncResult);
	}

};

}
