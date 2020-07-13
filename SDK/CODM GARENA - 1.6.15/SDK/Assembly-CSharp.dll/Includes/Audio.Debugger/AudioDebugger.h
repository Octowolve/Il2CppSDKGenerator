#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Debugger {

class AudioDebugger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Debugger", "AudioDebugger"));
	}

	template <typename T = Il2CppString*> T& MapID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LogPlayingEventsContains() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& GameModeCategory() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& CurGameMode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& MapName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LastMatineeName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& StrScenePaths() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& listPickupInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DictAllPortals() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& vecWeaponFlybySndPos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& LogSwitches() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& mLPSpeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& mBankNameToLoad() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& strEvent1() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& DelegateOnUpdate() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& msCurFrameRayCastCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& msCurFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifySingleLineCheckDone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Update() {
		return ((T (*)(AudioDebugger*))(Il2CppBase() + 0x44DFFE8))(this);
	}
	template <typename T = void> static T NotifySingleLineCheckDone() {
		return ((T (*)(void *))(Il2CppBase() + 0x44E00C8))(0);
	}

};

}
