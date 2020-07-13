#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRSoundVisibleMananger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRSoundVisibleMananger"));
	}

	template <typename T = uintptr_t> T& brGameInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& tacticalInstance_BR() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& SHOW_FIXED_DISTANCE() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& MAX_SHOW_SPRITE() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& NEAR_DISTANCE() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& MID_DISTANCE() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& FAR_DISTANCE() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSoundTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGeneratedXZNormalizeVector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateSoundTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalBRSoundVisibleMananger*))(Il2CppBase() + 0x30C3264))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalBRSoundVisibleMananger*))(Il2CppBase() + 0x30C34AC))(this);
	}
	template <typename T = void> T UpdateSoundTips(Il2CppDictionary<uint32_t, uintptr_t>* soundInfoDict, Il2CppList<uintptr_t>* soundTipsSprite) {
		return ((T (*)(TacticalBRSoundVisibleMananger*, Il2CppDictionary<uint32_t, uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x30C3600))(this, soundInfoDict, soundTipsSprite);
	}
	template <typename T = Il2CppVector3> T GetGeneratedXZNormalizeVector(uintptr_t soundInfo) {
		return ((T (*)(TacticalBRSoundVisibleMananger*, uintptr_t))(Il2CppBase() + 0x30C42EC))(this, soundInfo);
	}
	template <typename T = void> T UpdatePlayerSpriteInfo(uintptr_t inPawnSprite, Il2CppVector3 inPosition, Il2CppQuaternion inRotation, float distance, uintptr_t soundID) {
		return ((T (*)(TacticalBRSoundVisibleMananger*, uintptr_t, Il2CppVector3, Il2CppQuaternion, float, uintptr_t))(Il2CppBase() + 0x30C4470))(this, inPawnSprite, inPosition, inRotation, distance, soundID);
	}
	template <typename T = void> T UpdateSoundTips_1(uintptr_t inMultiSprite, uintptr_t soundID, float distance) {
		return ((T (*)(TacticalBRSoundVisibleMananger*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x30C48C8))(this, inMultiSprite, soundID, distance);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalBRSoundVisibleMananger*))(Il2CppBase() + 0x30C4CB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalBRSoundVisibleMananger*))(Il2CppBase() + 0x30C4CC0))(this);
	}

};

}
