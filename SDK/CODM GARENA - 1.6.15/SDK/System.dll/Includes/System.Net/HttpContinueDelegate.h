#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class HttpContinueDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "HttpContinueDelegate"));
	}


	template <typename T = void> T Invoke(int32_t StatusCode, uintptr_t httpHeaders) {
		return ((T (*)(HttpContinueDelegate*, int32_t, uintptr_t))(Il2CppBase() + 0x42D7FDC))(this, StatusCode, httpHeaders);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t StatusCode, uintptr_t httpHeaders, uintptr_t callback, uintptr_t object) {
		return ((T (*)(HttpContinueDelegate*, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42D8070))(this, StatusCode, httpHeaders, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(HttpContinueDelegate*, uintptr_t))(Il2CppBase() + 0x42D8134))(this, result);
	}

};

}
