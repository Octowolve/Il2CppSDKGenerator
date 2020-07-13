#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MSDKRetJsonEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MSDKRetJsonEventHandler"));
	}


	template <typename T = Il2CppString*> T Invoke(int32_t methodId, Il2CppString* jsonstr) {
		return ((T (*)(MSDKRetJsonEventHandler*, int32_t, Il2CppString*))(Il2CppBase() + 0x46D7F2C))(this, methodId, jsonstr);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t methodId, Il2CppString* jsonstr, uintptr_t callback, uintptr_t object) {
		return ((T (*)(MSDKRetJsonEventHandler*, int32_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x46D7FC0))(this, methodId, jsonstr, callback, object);
	}
	template <typename T = Il2CppString*> T EndInvoke(uintptr_t result) {
		return ((T (*)(MSDKRetJsonEventHandler*, uintptr_t))(Il2CppBase() + 0x46D8084))(this, result);
	}

};

}
