#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.AudioLogic {

class WNPawnSoundEmitterRoomHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.AudioLogic", "WNPawnSoundEmitterRoomHandle"));
	}

	template <typename T = int32_t> T& mRoomID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& mEnterCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mOwner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Term() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoomID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoomEnterCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyEnterTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyLeaveTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillInDebugString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init(uintptr_t pOwner) {
		return ((T (*)(WNPawnSoundEmitterRoomHandle*, uintptr_t))(Il2CppBase() + 0x3BAE45C))(this, pOwner);
	}
	template <typename T = void> T Term() {
		return ((T (*)(WNPawnSoundEmitterRoomHandle*))(Il2CppBase() + 0x3BAE56C))(this);
	}
	template <typename T = int32_t> T GetRoomID() {
		return ((T (*)(WNPawnSoundEmitterRoomHandle*))(Il2CppBase() + 0x3BAE610))(this);
	}
	template <typename T = int32_t> T GetRoomEnterCount() {
		return ((T (*)(WNPawnSoundEmitterRoomHandle*))(Il2CppBase() + 0x3BAE6B0))(this);
	}
	template <typename T = void> T NotifyEnterTrigger(int32_t iRoomID, uintptr_t pVCD) {
		return ((T (*)(WNPawnSoundEmitterRoomHandle*, int32_t, uintptr_t))(Il2CppBase() + 0x3BAE750))(this, iRoomID, pVCD);
	}
	template <typename T = void> T NotifyLeaveTrigger(int32_t iRoomID, uintptr_t pVCD) {
		return ((T (*)(WNPawnSoundEmitterRoomHandle*, int32_t, uintptr_t))(Il2CppBase() + 0x3BAE830))(this, iRoomID, pVCD);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WNPawnSoundEmitterRoomHandle*))(Il2CppBase() + 0x3BAE908))(this);
	}
	template <typename T = void> T FillInDebugString(uintptr_t sbBuffer) {
		return ((T (*)(WNPawnSoundEmitterRoomHandle*, uintptr_t))(Il2CppBase() + 0x3BAE9B4))(this, sbBuffer);
	}

};

}
