#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkRoomPortal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkRoomPortal"));
	}

	template <typename T = int32_t> static T& MAX_ROOMS_PER_PORTAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& extent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& portalTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& backRoomID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<int32_t>*> T& closePortalTriggerList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& cachedPortalTriggerList() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint64_t> T& frontRoomID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rooms() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<Il2CppList<uintptr_t>*>*> static T& AllPortals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& mListIndex() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& mIndex() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> static T& DisableAllPortals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& kPortalCountPerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& CachedPosition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mBox() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& mIsActivated() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = uint64_t> T GetID() {
		return ((T (*)(AkRoomPortal*))(Il2CppBase() + 0x491FD70))(this);
	}
	template <typename T = bool> T get_IsActivated() {
		return ((T (*)(AkRoomPortal*))(Il2CppBase() + 0x491FD88))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AkRoomPortal*))(Il2CppBase() + 0x491FD90))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AkRoomPortal*))(Il2CppBase() + 0x4920354))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AkRoomPortal*))(Il2CppBase() + 0x4920568))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AkRoomPortal*))(Il2CppBase() + 0x4920D2C))(this);
	}
	template <typename T = void> T _UpdatePosition() {
		return ((T (*)(AkRoomPortal*))(Il2CppBase() + 0x4920418))(this);
	}
	template <typename T = void> T UpdateWorldShift() {
		return ((T (*)(AkRoomPortal*))(Il2CppBase() + 0x4921404))(this);
	}
	template <typename T = void> T HandleEvent(uintptr_t in_gameObject) {
		return ((T (*)(AkRoomPortal*, uintptr_t))(Il2CppBase() + 0x4921408))(this, in_gameObject);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AkRoomPortal*))(Il2CppBase() + 0x492140C))(this);
	}
	template <typename T = void> T Open() {
		return ((T (*)(AkRoomPortal*))(Il2CppBase() + 0x49213FC))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(AkRoomPortal*))(Il2CppBase() + 0x4920494))(this);
	}
	template <typename T = void> T ActivatePortal(bool active) {
		return ((T (*)(AkRoomPortal*, bool))(Il2CppBase() + 0x4921438))(this, active);
	}
	template <typename T = void> T FindOverlappingRooms(Il2CppArray<uintptr_t>* roomList) {
		return ((T (*)(AkRoomPortal*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4921C34))(this, roomList);
	}
	template <typename T = void> T FillRoomList(Il2CppVector3 center, Il2CppVector3 halfExtents, uintptr_t list) {
		return ((T (*)(AkRoomPortal*, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4921EDC))(this, center, halfExtents, list);
	}
	template <typename T = void> T SetFrontRoom(uintptr_t room) {
		return ((T (*)(AkRoomPortal*, uintptr_t))(Il2CppBase() + 0x4922124))(this, room);
	}
	template <typename T = void> T SetBackRoom(uintptr_t room) {
		return ((T (*)(AkRoomPortal*, uintptr_t))(Il2CppBase() + 0x49222E4))(this, room);
	}
	template <typename T = void> T UpdateOverlappingRooms() {
		return ((T (*)(AkRoomPortal*))(Il2CppBase() + 0x49224A4))(this);
	}
	template <typename T = float> static T GetEnableSqrtDistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4922908))(0);
	}
	template <typename T = void> T _CacheTransform() {
		return ((T (*)(AkRoomPortal*))(Il2CppBase() + 0x4920154))(this);
	}
	template <typename T = Il2CppVector3> T _CaculatePoint(Il2CppVector3 dirToRoot) {
		return ((T (*)(AkRoomPortal*, Il2CppVector3))(Il2CppBase() + 0x4922EB8))(this, dirToRoot);
	}
	template <typename T = void> T _FillInExtent() {
		return ((T (*)(AkRoomPortal*))(Il2CppBase() + 0x49229E4))(this);
	}

};

}
