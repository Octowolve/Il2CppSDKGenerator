#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendTextMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendTextMsg"));
	}


	template <typename T = void> T Invoke(Il2CppString* content) {
		return ((T (*)(SendTextMsg*, Il2CppString*))(Il2CppBase() + 0x24F848C))(this, content);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* content, uintptr_t callback, uintptr_t object) {
		return ((T (*)(SendTextMsg*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x24F9FA0))(this, content, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SendTextMsg*, uintptr_t))(Il2CppBase() + 0x24F9FCC))(this, result);
	}

};

}
