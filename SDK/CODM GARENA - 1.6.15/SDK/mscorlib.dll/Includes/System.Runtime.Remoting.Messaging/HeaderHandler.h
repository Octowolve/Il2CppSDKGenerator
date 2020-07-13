#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class HeaderHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "HeaderHandler"));
	}


	template <typename T = uintptr_t> T Invoke(Il2CppArray<uintptr_t>* headers) {
		return ((T (*)(HeaderHandler*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B366B8))(this, headers);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* headers, uintptr_t callback, uintptr_t object) {
		return ((T (*)(HeaderHandler*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B36750))(this, headers, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(HeaderHandler*, uintptr_t))(Il2CppBase() + 0x4B3677C))(this, result);
	}

};

}
