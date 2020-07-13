#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PawnSoundComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PawnSoundComponent"));
	}

	template <typename T = Il2CppDictionary<int32_t, float>*> T& _stateTriggerTimeDic() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<float>*>*> T& _stateIntervalTimeDic() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _stateContinuedTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _stateTriggerCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& MAX_MOVESOUND_DISTANCE_MP() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& MAX_MOVESOUND_DISTANCE_BR() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _maxMoveSoundDistance() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _pawnSoundEmitter() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& eCrtMoveSoundType() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& eLastMoveSoundType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _lastCheckResult() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& _lastCheckTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& CHECK_INTERVAL_TIME() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPawnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateStateLastTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPawnStateSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayGoliathPawnStateSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePawnStateDictionary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(PawnSoundComponent*, uintptr_t))(Il2CppBase() + 0x273B358))(this, pawn);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(PawnSoundComponent*))(Il2CppBase() + 0x273B45C))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(PawnSoundComponent*))(Il2CppBase() + 0x273B9C8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PawnSoundComponent*, float))(Il2CppBase() + 0x273BAD4))(this, deltaTime);
	}
	template <typename T = void> T GetCurrentPawnState() {
		return ((T (*)(PawnSoundComponent*))(Il2CppBase() + 0x273BE04))(this);
	}
	template <typename T = void> T UpdateStateLastTime(float deltaTime) {
		return ((T (*)(PawnSoundComponent*, float))(Il2CppBase() + 0x273C030))(this, deltaTime);
	}
	template <typename T = bool> T CheckPlaySound() {
		return ((T (*)(PawnSoundComponent*))(Il2CppBase() + 0x273C100))(this);
	}
	template <typename T = void> T PlayPawnStateSound() {
		return ((T (*)(PawnSoundComponent*))(Il2CppBase() + 0x273C488))(this);
	}
	template <typename T = void> T PlayGoliathPawnStateSound() {
		return ((T (*)(PawnSoundComponent*))(Il2CppBase() + 0x273C694))(this);
	}
	template <typename T = void> T UpdatePawnStateDictionary() {
		return ((T (*)(PawnSoundComponent*))(Il2CppBase() + 0x273C398))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(PawnSoundComponent*, uintptr_t))(Il2CppBase() + 0x273C780))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(PawnSoundComponent*))(Il2CppBase() + 0x273C784))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PawnSoundComponent*, float))(Il2CppBase() + 0x273C78C))(this, P0);
	}

};

}
