#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MemberVoiceEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MemberVoiceEventHandler"));
	}


	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* members, int32_t count) {
		return ((T (*)(MemberVoiceEventHandler*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4542C3C))(this, members, count);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* members, int32_t count, uintptr_t callback, uintptr_t object) {
		return ((T (*)(MemberVoiceEventHandler*, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x454BD14))(this, members, count, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(MemberVoiceEventHandler*, uintptr_t))(Il2CppBase() + 0x454BDDC))(this, result);
	}

};

}
