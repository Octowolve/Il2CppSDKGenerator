#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class ReplaySummonManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "ReplaySummonManager"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_OriginalSummonPawns() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_ReplaySummonPawns() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsPlaying() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IsClearingSummonPawns() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckReplayObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenameActorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestoryCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearReplaySummonPawns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideOrShowOriginalActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_HideOrShowOriginalActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideOriginalActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOriginalActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ReplaySummonManager*))(Il2CppBase() + 0x2B19380))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(ReplaySummonManager*))(Il2CppBase() + 0x2B19AE8))(this);
	}
	template <typename T = bool> T CheckReplayObject(uint32_t actorId) {
		return ((T (*)(ReplaySummonManager*, uint32_t))(Il2CppBase() + 0x2B19D78))(this, actorId);
	}
	template <typename T = void> T CreateCallBack(uint32_t actorID, uintptr_t obj, uintptr_t cb) {
		return ((T (*)(ReplaySummonManager*, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B19E3C))(this, actorID, obj, cb);
	}
	template <typename T = void> T RenameActorID(uint32_t oldID, uint32_t newID) {
		return ((T (*)(ReplaySummonManager*, uint32_t, uint32_t))(Il2CppBase() + 0x2B1A3AC))(this, oldID, newID);
	}
	template <typename T = void> T DestoryCallBack(uint32_t actorID, uintptr_t obj) {
		return ((T (*)(ReplaySummonManager*, uint32_t, uintptr_t))(Il2CppBase() + 0x2B1A8E4))(this, actorID, obj);
	}
	template <typename T = void> T ClearReplaySummonPawns() {
		return ((T (*)(ReplaySummonManager*))(Il2CppBase() + 0x2B1AB10))(this);
	}
	template <typename T = void> T HideOrShowOriginalActor(bool isHidden) {
		return ((T (*)(ReplaySummonManager*, bool))(Il2CppBase() + 0x2B1AE60))(this, isHidden);
	}
	template <typename T = void> T HideOrShowOriginalActor_1(uint32_t actorID, uintptr_t target, bool isHidden) {
		return ((T (*)(ReplaySummonManager*, uint32_t, uintptr_t, bool))(Il2CppBase() + 0x2B1A0B0))(this, actorID, target, isHidden);
	}
	template <typename T = void> T HideOriginalActor() {
		return ((T (*)(ReplaySummonManager*))(Il2CppBase() + 0x2B1B0BC))(this);
	}
	template <typename T = void> T ShowOriginalActor() {
		return ((T (*)(ReplaySummonManager*))(Il2CppBase() + 0x2B1B16C))(this);
	}

};

}
