#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class DanceFloorMonitor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "DanceFloorMonitor"));
	}

	template <typename T = uintptr_t> T& AudioSpecProvider() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AudioSpectrumDataList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAudioSpectrum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(DanceFloorMonitor*))(Il2CppBase() + 0x3D450A0))(this);
	}
	template <typename T = void> T InitStatus(bool bStartPlay, int32_t index, float elapseTime) {
		return ((T (*)(DanceFloorMonitor*, bool, int32_t, float))(Il2CppBase() + 0x3D45308))(this, bStartPlay, index, elapseTime);
	}
	template <typename T = void> T Play(bool bPlaying) {
		return ((T (*)(DanceFloorMonitor*, bool))(Il2CppBase() + 0x3D45618))(this, bPlaying);
	}
	template <typename T = void> T ChangeAudioSpectrum(bool bPlayImmediately, int32_t index, float timeElapsed) {
		return ((T (*)(DanceFloorMonitor*, bool, int32_t, float))(Il2CppBase() + 0x3D453E4))(this, bPlayImmediately, index, timeElapsed);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DanceFloorMonitor*))(Il2CppBase() + 0x3D45744))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitStatus(bool P0, int32_t P1, float P2) {
		return ((T (*)(DanceFloorMonitor*, bool, int32_t, float))(Il2CppBase() + 0x3D45748))(this, P0, P1, P2);
	}

};

}
