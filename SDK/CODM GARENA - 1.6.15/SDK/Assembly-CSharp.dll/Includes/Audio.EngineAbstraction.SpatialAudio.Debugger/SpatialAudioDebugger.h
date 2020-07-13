#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.SpatialAudio.Debugger {

class SpatialAudioDebugger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.SpatialAudio.Debugger", "SpatialAudioDebugger"));
	}

	template <typename T = uintptr_t> T& mLocalPlayer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mSpatialData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mPathToLP() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& AudioRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsInRoom() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsLPInRoom() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> T& Acoustic3P() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& AcousticLP() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CaculatePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T CaculatePath() {
		return ((T (*)(SpatialAudioDebugger*))(Il2CppBase() + 0x44EE49C))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(SpatialAudioDebugger*))(Il2CppBase() + 0x44EE934))(this);
	}

};

}
