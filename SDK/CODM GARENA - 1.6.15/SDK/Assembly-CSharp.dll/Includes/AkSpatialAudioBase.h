#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkSpatialAudioBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkSpatialAudioBase"));
	}

	template <typename T = uintptr_t> T& roomPriorityList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& CurrentRoomID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mGameObjectDelegates() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T GetHighestPriorityRoomID() {
		return ((T (*)(AkSpatialAudioBase*))(Il2CppBase() + 0x22A72F0))(this);
	}
	template <typename T = void> T SetGameObjectInHighestPriorityRoom() {
		return ((T (*)(AkSpatialAudioBase*))(Il2CppBase() + 0x22A731C))(this);
	}
	template <typename T = void> T EnteredRoom(uintptr_t room) {
		return ((T (*)(AkSpatialAudioBase*, uintptr_t))(Il2CppBase() + 0x22A7534))(this, room);
	}
	template <typename T = void> T ExitedRoom(uintptr_t room) {
		return ((T (*)(AkSpatialAudioBase*, uintptr_t))(Il2CppBase() + 0x22A756C))(this, room);
	}
	template <typename T = void> T SetGameObjectInRoom() {
		return ((T (*)(AkSpatialAudioBase*))(Il2CppBase() + 0x22A75A4))(this);
	}
	template <typename T = void> T ClearRoomStatusAndSetOutdoor() {
		return ((T (*)(AkSpatialAudioBase*))(Il2CppBase() + 0x22A7888))(this);
	}

};

}
