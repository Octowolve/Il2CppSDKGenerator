#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.SpatialAudio.Data {

class AudioWayPointLine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.SpatialAudio.Data", "AudioWayPointLine"));
	}

	template <typename T = int32_t> T& Length() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& IDPointA() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& IDPointB() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstructLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ContainsPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOtherPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T ConstructLine(uintptr_t x, uintptr_t y, float fLength) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x44E9348))(0, x, y, fLength);
	}
	template <typename T = bool> T ContainsPoint(uintptr_t pX) {
		return ((T (*)(AudioWayPointLine*, uintptr_t))(Il2CppBase() + 0x44E8A38))(this, pX);
	}
	template <typename T = Il2CppString*> T GetOtherPoint(Il2CppString* iThisEnd) {
		return ((T (*)(AudioWayPointLine*, Il2CppString*))(Il2CppBase() + 0x44E9AF8))(this, iThisEnd);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AudioWayPointLine*))(Il2CppBase() + 0x44E9C54))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(AudioWayPointLine*))(Il2CppBase() + 0x44E9D70))(this);
	}

};

}
