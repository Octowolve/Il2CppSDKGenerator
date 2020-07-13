#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoomMemberChangedCompleteHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomMemberChangedCompleteHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t code, Il2CppString* roomName, int32_t memid, Il2CppString* openID) {
		return ((T (*)(RoomMemberChangedCompleteHandler*, uintptr_t, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x4543178))(this, code, roomName, memid, openID);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t code, Il2CppString* roomName, int32_t memid, Il2CppString* openID, uintptr_t callback, uintptr_t object) {
		return ((T (*)(RoomMemberChangedCompleteHandler*, uintptr_t, Il2CppString*, int32_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x454C2B8))(this, code, roomName, memid, openID, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(RoomMemberChangedCompleteHandler*, uintptr_t))(Il2CppBase() + 0x454C3A8))(this, result);
	}

};

}
