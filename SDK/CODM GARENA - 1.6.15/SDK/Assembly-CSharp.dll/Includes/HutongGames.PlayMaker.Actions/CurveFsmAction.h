#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class CurveFsmAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "CurveFsmAction"));
	}

	template <typename T = uintptr_t> T& time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& speed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& delay() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ignoreCurveOffset() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& realTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& currentTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& endTimes() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& lastTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& deltaTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& delayTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& keyOffsets() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& curves() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& calculations() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& resultFloats() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& fromFloats() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& toFloats() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& distances() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& finishAction() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& isRunning() {
		return *(T*)((uintptr_t)this + 0x75);
	}
	template <typename T = bool> T& looping() {
		return *(T*)((uintptr_t)this + 0x76);
	}
	template <typename T = bool> T& start() {
		return *(T*)((uintptr_t)this + 0x77);
	}
	template <typename T = float> T& largestEndTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(CurveFsmAction*))(Il2CppBase() + 0x4FBFE0C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(CurveFsmAction*))(Il2CppBase() + 0x4FC0728))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CurveFsmAction*))(Il2CppBase() + 0x4FC07D4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(CurveFsmAction*))(Il2CppBase() + 0x4FC1300))(this);
	}

};

}
