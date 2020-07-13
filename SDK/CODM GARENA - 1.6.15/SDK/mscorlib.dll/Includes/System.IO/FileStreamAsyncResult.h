#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class FileStreamAsyncResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "FileStreamAsyncResult"));
	}

	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& completed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& wh() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& cb() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& OriginalCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& BytesRead() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& realcb() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> static T CBWrapper(uintptr_t ares) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FFCBCC))(0, ares);
	}
	template <typename T = uintptr_t> T get_AsyncState() {
		return ((T (*)(FileStreamAsyncResult*))(Il2CppBase() + 0x3FFCC8C))(this);
	}
	template <typename T = uintptr_t> T get_AsyncWaitHandle() {
		return ((T (*)(FileStreamAsyncResult*))(Il2CppBase() + 0x3FFCC94))(this);
	}
	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(FileStreamAsyncResult*))(Il2CppBase() + 0x3FFCC9C))(this);
	}

};

}
