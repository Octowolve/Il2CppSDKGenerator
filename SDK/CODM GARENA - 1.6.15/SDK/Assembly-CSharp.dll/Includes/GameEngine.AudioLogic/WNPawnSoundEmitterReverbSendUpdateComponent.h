#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.AudioLogic {

class WNPawnSoundEmitterReverbSendUpdateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.AudioLogic", "WNPawnSoundEmitterReverbSendUpdateComponent"));
	}

	template <typename T = uintptr_t> T& mOwner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mPawnAGO() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mArrDirectionLength() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mArrDirections() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& vecStartPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mArrHitPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& mCurDetectDirection() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> static T& DetectHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kRTPC_Room_Reverb_SendLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Term() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSeperatly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__GetLengthToHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init(uintptr_t pOwner) {
		return ((T (*)(WNPawnSoundEmitterReverbSendUpdateComponent*, uintptr_t))(Il2CppBase() + 0x35DC438))(this, pOwner);
	}
	template <typename T = void> T Term() {
		return ((T (*)(WNPawnSoundEmitterReverbSendUpdateComponent*))(Il2CppBase() + 0x35DC518))(this);
	}
	template <typename T = void> T TickSeperatly() {
		return ((T (*)(WNPawnSoundEmitterReverbSendUpdateComponent*))(Il2CppBase() + 0x35DC5EC))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(WNPawnSoundEmitterReverbSendUpdateComponent*))(Il2CppBase() + 0x35DD130))(this);
	}
	template <typename T = float> static T _GetLengthToHit(Il2CppVector3 vecStartPos, Il2CppVector3 vecDirection, uintptr_t vecHitPos) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x35DCDF0))(0, vecStartPos, vecDirection, vecHitPos);
	}

};

}
