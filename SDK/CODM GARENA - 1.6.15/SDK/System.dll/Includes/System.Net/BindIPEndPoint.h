#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class BindIPEndPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "BindIPEndPoint"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t servicePoint, uintptr_t remoteEndPoint, int32_t retryCount) {
		return ((T (*)(BindIPEndPoint*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x42B7438))(this, servicePoint, remoteEndPoint, retryCount);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t servicePoint, uintptr_t remoteEndPoint, int32_t retryCount, uintptr_t callback, uintptr_t object) {
		return ((T (*)(BindIPEndPoint*, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B7514))(this, servicePoint, remoteEndPoint, retryCount, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(BindIPEndPoint*, uintptr_t))(Il2CppBase() + 0x42B75DC))(this, result);
	}

};

}
