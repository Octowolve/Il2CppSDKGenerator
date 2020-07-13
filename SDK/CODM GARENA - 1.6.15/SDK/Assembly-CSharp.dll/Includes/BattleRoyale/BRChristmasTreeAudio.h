#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChristmasTreeAudio
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChristmasTreeAudio"));
	}

	template <typename T = float> T& CheckTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Max2DRadius() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& StartEvent2D() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& StopEvent2D() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& StartEvent3D() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& StopEvent3D() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& AudioArgName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_NextCheckTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_Is3D() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(BRChristmasTreeAudio*))(Il2CppBase() + 0x2501894))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRChristmasTreeAudio*))(Il2CppBase() + 0x2501938))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRChristmasTreeAudio*))(Il2CppBase() + 0x2501C0C))(this);
	}
	template <typename T = void> T DoCheck(bool isStart) {
		return ((T (*)(BRChristmasTreeAudio*, bool))(Il2CppBase() + 0x2501CE4))(this, isStart);
	}
	template <typename T = void> T PlaySound(Il2CppString* eventName, bool is3P) {
		return ((T (*)(BRChristmasTreeAudio*, Il2CppString*, bool))(Il2CppBase() + 0x2501A14))(this, eventName, is3P);
	}

};

}
