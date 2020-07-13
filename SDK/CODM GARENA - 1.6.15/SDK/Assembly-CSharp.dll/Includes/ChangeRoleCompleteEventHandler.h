#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeRoleCompleteEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeRoleCompleteEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t code, Il2CppString* roomName, int32_t memberID, int32_t role) {
		return ((T (*)(ChangeRoleCompleteEventHandler*, uintptr_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x4542E84))(this, code, roomName, memberID, role);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t code, Il2CppString* roomName, int32_t memberID, int32_t role, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ChangeRoleCompleteEventHandler*, uintptr_t, Il2CppString*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x454B704))(this, code, roomName, memberID, role, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ChangeRoleCompleteEventHandler*, uintptr_t))(Il2CppBase() + 0x454B804))(this, result);
	}

};

}
