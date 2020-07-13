#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowAdCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowAdCallBack"));
	}


	template <typename T = void> T Invoke(bool success, Il2CppString* placeName) {
		return ((T (*)(ShowAdCallBack*, bool, Il2CppString*))(Il2CppBase() + 0x4A18C18))(this, success, placeName);
	}
	template <typename T = uintptr_t> T BeginInvoke(bool success, Il2CppString* placeName, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ShowAdCallBack*, bool, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A190B8))(this, success, placeName, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ShowAdCallBack*, uintptr_t))(Il2CppBase() + 0x4A1917C))(this, result);
	}

};

}
