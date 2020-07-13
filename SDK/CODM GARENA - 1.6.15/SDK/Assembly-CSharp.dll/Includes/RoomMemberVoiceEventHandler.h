#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoomMemberVoiceEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomMemberVoiceEventHandler"));
	}


	template <typename T = void> T Invoke(Il2CppString* roomName, int32_t member, int32_t status) {
		return ((T (*)(RoomMemberVoiceEventHandler*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x4542D00))(this, roomName, member, status);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* roomName, int32_t member, int32_t status, uintptr_t callback, uintptr_t object) {
		return ((T (*)(RoomMemberVoiceEventHandler*, Il2CppString*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x454C404))(this, roomName, member, status, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(RoomMemberVoiceEventHandler*, uintptr_t))(Il2CppBase() + 0x454C4DC))(this, result);
	}

};

}
