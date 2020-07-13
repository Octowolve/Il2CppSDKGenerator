#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.AudioLogic {

class IRoomHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.AudioLogic", "IRoomHandle"));
	}


	template <typename T = void> T Init(uintptr_t pOwner) {
		return ((T (*)(IRoomHandle*, uintptr_t))(Il2CppBase() + 0x0))(this, pOwner);
	}
	template <typename T = void> T Term() {
		return ((T (*)(IRoomHandle*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetRoomID() {
		return ((T (*)(IRoomHandle*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetRoomEnterCount() {
		return ((T (*)(IRoomHandle*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T NotifyEnterTrigger(int32_t iRoomID, uintptr_t pWhichRoom) {
		return ((T (*)(IRoomHandle*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, iRoomID, pWhichRoom);
	}
	template <typename T = void> T NotifyLeaveTrigger(int32_t iRoomID, uintptr_t pVCD) {
		return ((T (*)(IRoomHandle*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, iRoomID, pVCD);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IRoomHandle*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T FillInDebugString(uintptr_t sbBuffer) {
		return ((T (*)(IRoomHandle*, uintptr_t))(Il2CppBase() + 0x0))(this, sbBuffer);
	}

};

}
