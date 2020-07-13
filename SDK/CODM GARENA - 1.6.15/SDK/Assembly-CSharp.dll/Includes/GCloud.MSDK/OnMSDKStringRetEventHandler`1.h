#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class OnMSDKStringRetEventHandler1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "OnMSDKStringRetEventHandler`1"));
	}


	template <typename T = Il2CppString*> T Invoke(uintptr_t ret) {
		return ((T (*)(OnMSDKStringRetEventHandler1*, uintptr_t))(Il2CppBase() + 0x48E6EB8))(this, ret);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t ret, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnMSDKStringRetEventHandler1*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48E6F50))(this, ret, callback, object);
	}
	template <typename T = Il2CppString*> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnMSDKStringRetEventHandler1*, uintptr_t))(Il2CppBase() + 0x48E6F7C))(this, result);
	}

};

}
