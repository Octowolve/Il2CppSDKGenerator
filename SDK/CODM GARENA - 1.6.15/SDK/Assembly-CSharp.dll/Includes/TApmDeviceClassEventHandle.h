#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TApmDeviceClassEventHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TApmDeviceClassEventHandle"));
	}


	template <typename T = void> T Invoke(int32_t deviceclass) {
		return ((T (*)(TApmDeviceClassEventHandle*, int32_t))(Il2CppBase() + 0x4514B58))(this, deviceclass);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t deviceclass, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TApmDeviceClassEventHandle*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4514BEC))(this, deviceclass, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TApmDeviceClassEventHandle*, uintptr_t))(Il2CppBase() + 0x4514CA8))(this, result);
	}

};

}
