#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatusUpdateEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatusUpdateEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t code, Il2CppString* roomName, int32_t memberID) {
		return ((T (*)(StatusUpdateEventHandler*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4542DDC))(this, code, roomName, memberID);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t code, Il2CppString* roomName, int32_t memberID, uintptr_t callback, uintptr_t object) {
		return ((T (*)(StatusUpdateEventHandler*, uintptr_t, Il2CppString*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x454CB0C))(this, code, roomName, memberID, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(StatusUpdateEventHandler*, uintptr_t))(Il2CppBase() + 0x454CBEC))(this, result);
	}

};

}
