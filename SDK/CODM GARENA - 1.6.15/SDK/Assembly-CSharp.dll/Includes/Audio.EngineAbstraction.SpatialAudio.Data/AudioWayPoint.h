#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.SpatialAudio.Data {

class AudioWayPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.SpatialAudio.Data", "AudioWayPoint"));
	}

	template <typename T = Il2CppString*> T& ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ConnectedLines() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AssociatedRooms() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInAssociatedRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DistanceTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsConnectedTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLengthWith() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveConnectionWith() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddConnectionWith() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T IsInAssociatedRoom(uintptr_t ptTarget) {
		return ((T (*)(AudioWayPoint*, uintptr_t))(Il2CppBase() + 0x44E813C))(this, ptTarget);
	}
	template <typename T = int32_t> T DistanceTo(uintptr_t ptTarget) {
		return ((T (*)(AudioWayPoint*, uintptr_t))(Il2CppBase() + 0x44E8834))(this, ptTarget);
	}
	template <typename T = bool> T IsConnectedTo(uintptr_t ptOtherPoint) {
		return ((T (*)(AudioWayPoint*, uintptr_t))(Il2CppBase() + 0x44E8B98))(this, ptOtherPoint);
	}
	template <typename T = void> T RefreshLengthWith(uintptr_t ptOtherPoint) {
		return ((T (*)(AudioWayPoint*, uintptr_t))(Il2CppBase() + 0x44E8D1C))(this, ptOtherPoint);
	}
	template <typename T = void> T RemoveConnectionWith(uintptr_t ptOtherPoint) {
		return ((T (*)(AudioWayPoint*, uintptr_t))(Il2CppBase() + 0x44E8F50))(this, ptOtherPoint);
	}
	template <typename T = void> T AddConnectionWith(uintptr_t ptOtherPoint, uintptr_t ptLine) {
		return ((T (*)(AudioWayPoint*, uintptr_t, uintptr_t))(Il2CppBase() + 0x44E9144))(this, ptOtherPoint, ptLine);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AudioWayPoint*))(Il2CppBase() + 0x44E9464))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(AudioWayPoint*))(Il2CppBase() + 0x44E9504))(this);
	}

};

}
