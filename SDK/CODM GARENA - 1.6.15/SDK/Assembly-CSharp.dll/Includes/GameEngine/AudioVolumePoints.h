#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AudioVolumePoints
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AudioVolumePoints"));
	}

	template <typename T = Il2CppVector3> T& StartPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& MovingWidthCamera() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& IndicatorSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Span() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& mIsCheckPassed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawHitPointAtScrPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmosSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CaculateHitPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(AudioVolumePoints*))(Il2CppBase() + 0x35EB60C))(this);
	}
	template <typename T = Il2CppVector3> T DrawHitPointAtScrPos(Il2CppVector3 vecViewPoint) {
		return ((T (*)(AudioVolumePoints*, Il2CppVector3))(Il2CppBase() + 0x35EB7B0))(this, vecViewPoint);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(AudioVolumePoints*))(Il2CppBase() + 0x35EB898))(this);
	}
	template <typename T = Il2CppVector3> T _CaculateHitPos(Il2CppVector3 vecStartPos, Il2CppVector3 vecDirection) {
		return ((T (*)(AudioVolumePoints*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x35EB930))(this, vecStartPos, vecDirection);
	}

};

}
