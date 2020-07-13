#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class IAsyncResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "IAsyncResult"));
	}


	template <typename T = uintptr_t> T get_AsyncState() {
		return ((T (*)(IAsyncResult*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_AsyncWaitHandle() {
		return ((T (*)(IAsyncResult*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(IAsyncResult*))(Il2CppBase() + 0x0))(this);
	}

};

}
