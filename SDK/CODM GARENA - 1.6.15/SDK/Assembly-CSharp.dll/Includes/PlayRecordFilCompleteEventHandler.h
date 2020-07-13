#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayRecordFilCompleteEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayRecordFilCompleteEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t code, Il2CppString* filepath) {
		return ((T (*)(PlayRecordFilCompleteEventHandler*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4542A4C))(this, code, filepath);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t code, Il2CppString* filepath, uintptr_t callback, uintptr_t object) {
		return ((T (*)(PlayRecordFilCompleteEventHandler*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x454BF20))(this, code, filepath, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(PlayRecordFilCompleteEventHandler*, uintptr_t))(Il2CppBase() + 0x454BFE4))(this, result);
	}

};

}
