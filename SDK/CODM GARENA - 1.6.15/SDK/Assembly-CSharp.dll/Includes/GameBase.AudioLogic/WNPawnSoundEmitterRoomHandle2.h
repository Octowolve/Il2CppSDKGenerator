#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.AudioLogic {

class WNPawnSoundEmitterRoomHandle2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.AudioLogic", "WNPawnSoundEmitterRoomHandle2"));
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
	template <typename T = Il2CppList<uintptr_t>*> T& mListEnteredVolumes() {
		return *(T*)((uintptr_t)this + 0x14);
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
	template <typename T = uintptr_t> static T& __Hotfix0__RefreshRoomStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__AddToList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__RemoveFromList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__GetHighestPriorityVCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__Contains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetAuxSends() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__ClearAuxSends() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T Init(uintptr_t pOwner) {
		return ((T (*)(WNPawnSoundEmitterRoomHandle2*, uintptr_t))(Il2CppBase() + 0x3BAEA54))(this, pOwner);
	}
	template <typename T = void> T Term() {
		return ((T (*)(WNPawnSoundEmitterRoomHandle2*))(Il2CppBase() + 0x3BAEBA4))(this);
	}
	template <typename T = int32_t> T GetRoomID() {
		return ((T (*)(WNPawnSoundEmitterRoomHandle2*))(Il2CppBase() + 0x3BAEC74))(this);
	}
	template <typename T = int32_t> T GetRoomEnterCount() {
		return ((T (*)(WNPawnSoundEmitterRoomHandle2*))(Il2CppBase() + 0x3BAED14))(this);
	}
	template <typename T = void> T NotifyEnterTrigger(int32_t iRoomID, uintptr_t pVCD) {
		return ((T (*)(WNPawnSoundEmitterRoomHandle2*, int32_t, uintptr_t))(Il2CppBase() + 0x3BAEDB4))(this, iRoomID, pVCD);
	}
	template <typename T = void> T NotifyLeaveTrigger(int32_t iRoomID, uintptr_t pVCD) {
		return ((T (*)(WNPawnSoundEmitterRoomHandle2*, int32_t, uintptr_t))(Il2CppBase() + 0x3BB00BC))(this, iRoomID, pVCD);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WNPawnSoundEmitterRoomHandle2*))(Il2CppBase() + 0x3BB0628))(this);
	}
	template <typename T = void> T FillInDebugString(uintptr_t sbBuffer) {
		return ((T (*)(WNPawnSoundEmitterRoomHandle2*, uintptr_t))(Il2CppBase() + 0x3BB0700))(this, sbBuffer);
	}
	template <typename T = void> T _RefreshRoomStatus(uintptr_t pHighestPriorityVCD) {
		return ((T (*)(WNPawnSoundEmitterRoomHandle2*, uintptr_t))(Il2CppBase() + 0x3BAF6B4))(this, pHighestPriorityVCD);
	}
	template <typename T = void> T _AddToList(uintptr_t pVCD) {
		return ((T (*)(WNPawnSoundEmitterRoomHandle2*, uintptr_t))(Il2CppBase() + 0x3BAF5D4))(this, pVCD);
	}
	template <typename T = void> T _RemoveFromList(uintptr_t pVCD) {
		return ((T (*)(WNPawnSoundEmitterRoomHandle2*, uintptr_t))(Il2CppBase() + 0x3BB0548))(this, pVCD);
	}
	template <typename T = uintptr_t> T _GetHighestPriorityVCD() {
		return ((T (*)(WNPawnSoundEmitterRoomHandle2*))(Il2CppBase() + 0x3BAF420))(this);
	}
	template <typename T = bool> T _Contains(uintptr_t pVCD) {
		return ((T (*)(WNPawnSoundEmitterRoomHandle2*, uintptr_t))(Il2CppBase() + 0x3BAF264))(this, pVCD);
	}
	template <typename T = void> T _SetAuxSends(uintptr_t pVCD) {
		return ((T (*)(WNPawnSoundEmitterRoomHandle2*, uintptr_t))(Il2CppBase() + 0x3BB09F8))(this, pVCD);
	}
	template <typename T = void> T _ClearAuxSends() {
		return ((T (*)(WNPawnSoundEmitterRoomHandle2*))(Il2CppBase() + 0x3BB0E78))(this);
	}

};

}
