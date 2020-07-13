#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkRoom"));
	}

	template <typename T = uint64_t> static T& INVALID_ROOM_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& RoomCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<uint64_t>*> static T& ListAllRoomIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& ListAllRooms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> static T& NeedClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& priority() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& reverbAuxBus() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& reverbLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& wallOcclusion() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& EnableAt() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& CachedPosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& CullingRangeRatio() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> static T& ShowCullingRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15);
	}
	template <typename T = bool> static T& DisableAllRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16);
	}
	template <typename T = bool> T& mByPassRangeCheck() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mRoomParams() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> static T& IsDrawOpenGizmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17);
	}
	template <typename T = bool> T& mRegistered() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = float> T get_SqrtCullingRangeRatio() {
		return ((T (*)(AkRoom*))(Il2CppBase() + 0x491BDB0))(this);
	}
	template <typename T = bool> T get_ByPassRangeCheck() {
		return ((T (*)(AkRoom*))(Il2CppBase() + 0x491BDC0))(this);
	}
	template <typename T = void> T set_ByPassRangeCheck(bool value) {
		return ((T (*)(AkRoom*, bool))(Il2CppBase() + 0x491BDC8))(this, value);
	}
	template <typename T = void> T WriteDebugLog() {
		return ((T (*)(AkRoom*))(Il2CppBase() + 0x491BDD0))(this);
	}
	template <typename T = bool> static T get_IsSpatialAudioEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x48FB5A8))(0);
	}
	template <typename T = uint64_t> T GetID() {
		return ((T (*)(AkRoom*))(Il2CppBase() + 0x491C1AC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AkRoom*))(Il2CppBase() + 0x491C1C4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AkRoom*))(Il2CppBase() + 0x491C4C8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AkRoom*))(Il2CppBase() + 0x491C698))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AkRoom*))(Il2CppBase() + 0x491C6EC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AkRoom*))(Il2CppBase() + 0x491DCC0))(this);
	}
	template <typename T = void> T UpdateWorldShift() {
		return ((T (*)(AkRoom*))(Il2CppBase() + 0x491E1A8))(this);
	}
	template <typename T = void> T OnPawnEnter(uintptr_t pTarget) {
		return ((T (*)(AkRoom*, uintptr_t))(Il2CppBase() + 0x491E1FC))(this, pTarget);
	}
	template <typename T = void> T OnPawnExit(uintptr_t pTarget) {
		return ((T (*)(AkRoom*, uintptr_t))(Il2CppBase() + 0x491E380))(this, pTarget);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(AkRoom*))(Il2CppBase() + 0x491E504))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(AkRoom*))(Il2CppBase() + 0x491E734))(this);
	}
	template <typename T = bool> T ShouldByPassThisComp() {
		return ((T (*)(AkRoom*))(Il2CppBase() + 0x491D658))(this);
	}
	template <typename T = float> T GetEnableSqrtDistance() {
		return ((T (*)(AkRoom*))(Il2CppBase() + 0x491C3D0))(this);
	}

};

}
