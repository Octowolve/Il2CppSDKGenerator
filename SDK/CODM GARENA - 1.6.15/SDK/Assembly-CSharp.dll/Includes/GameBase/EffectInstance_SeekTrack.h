#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class EffectInstanceSeekTrack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "EffectInstance_SeekTrack"));
	}

	template <typename T = Il2CppDictionary<uint32_t, float>*> T& m_LastEffectSpawnTimeDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& TrackDuration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& TrackRange() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& TimeGap() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastEffectSpawnTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLastEffectSpawnTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T CheckSelf() {
		return ((T (*)(EffectInstanceSeekTrack*))(Il2CppBase() + 0x40F8C94))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(EffectInstanceSeekTrack*))(Il2CppBase() + 0x40F8DFC))(this);
	}
	template <typename T = void> T GetLastEffectSpawnTime(uint32_t playerID, uintptr_t lastTime, uintptr_t isLeft) {
		return ((T (*)(EffectInstanceSeekTrack*, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x40F8ED0))(this, playerID, lastTime, isLeft);
	}
	template <typename T = void> T SetLastEffectSpawnTime(uint32_t playerID, float lastTime, bool isLeft) {
		return ((T (*)(EffectInstanceSeekTrack*, uint32_t, float, bool))(Il2CppBase() + 0x40F9034))(this, playerID, lastTime, isLeft);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(EffectInstanceSeekTrack*, float))(Il2CppBase() + 0x40F91BC))(this, deltaTime);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(EffectInstanceSeekTrack*))(Il2CppBase() + 0x40F9D38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckSelf() {
		return ((T (*)(EffectInstanceSeekTrack*))(Il2CppBase() + 0x40F9E14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(EffectInstanceSeekTrack*, float))(Il2CppBase() + 0x40F9E18))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRecycle() {
		return ((T (*)(EffectInstanceSeekTrack*))(Il2CppBase() + 0x40F9E1C))(this);
	}

};

}
