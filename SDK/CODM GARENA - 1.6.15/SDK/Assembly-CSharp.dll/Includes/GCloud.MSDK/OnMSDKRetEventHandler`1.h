#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class OnMSDKRetEventHandler1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "OnMSDKRetEventHandler`1"));
	}


	template <typename T = void> T Invoke(uintptr_t ret) {
		return ((T (*)(OnMSDKRetEventHandler1*, uintptr_t))(Il2CppBase() + 0x48E6DD4))(this, ret);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t ret, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnMSDKRetEventHandler1*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48E6E6C))(this, ret, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnMSDKRetEventHandler1*, uintptr_t))(Il2CppBase() + 0x48E6E98))(this, result);
	}

};

}
