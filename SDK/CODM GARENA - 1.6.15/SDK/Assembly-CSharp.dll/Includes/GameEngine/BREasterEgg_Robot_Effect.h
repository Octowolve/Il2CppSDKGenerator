#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BREasterEggRobotEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BREasterEgg_Robot_Effect"));
	}

	template <typename T = uintptr_t> T& BrokenEffect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& TriggerEffect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& RewardEffect() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& BoomEffect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ShowEffect() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Text() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Anim() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_AudioPlayer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _printInteral() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRobotStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintDialog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BREasterEggRobotEffect*))(Il2CppBase() + 0x361A418))(this);
	}
	template <typename T = void> T PlayAudio(Il2CppString* soundName) {
		return ((T (*)(BREasterEggRobotEffect*, Il2CppString*))(Il2CppBase() + 0x361A508))(this, soundName);
	}
	template <typename T = void> T StopAudio() {
		return ((T (*)(BREasterEggRobotEffect*))(Il2CppBase() + 0x361A638))(this);
	}
	template <typename T = void> T SetRobotStat(uintptr_t stat) {
		return ((T (*)(BREasterEggRobotEffect*, uintptr_t))(Il2CppBase() + 0x361971C))(this, stat);
	}
	template <typename T = void> T ShowText(Il2CppString* TextLocid) {
		return ((T (*)(BREasterEggRobotEffect*, Il2CppString*))(Il2CppBase() + 0x361A0BC))(this, TextLocid);
	}
	template <typename T = uintptr_t> T PrintDialog(float displayInterval, Il2CppString* content) {
		return ((T (*)(BREasterEggRobotEffect*, float, Il2CppString*))(Il2CppBase() + 0x361A75C))(this, displayInterval, content);
	}

};

}
