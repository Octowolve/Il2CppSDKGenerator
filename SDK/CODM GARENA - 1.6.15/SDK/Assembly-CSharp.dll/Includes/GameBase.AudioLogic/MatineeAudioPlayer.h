#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.AudioLogic {

class MatineeAudioPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.AudioLogic", "MatineeAudioPlayer"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMatineeAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopMatineeAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__GetMatineeCfg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T PlayMatineeAudio(int32_t iMapID, Il2CppString* strMatineeName, uintptr_t goTargetObj) {
		return ((T (*)(MatineeAudioPlayer*, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3B96800))(this, iMapID, strMatineeName, goTargetObj);
	}
	template <typename T = void> T StopMatineeAudio(int32_t iMapID, Il2CppString* strMatineeName, uintptr_t goTargetObj) {
		return ((T (*)(MatineeAudioPlayer*, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3B96B8C))(this, iMapID, strMatineeName, goTargetObj);
	}
	template <typename T = uintptr_t> T _GetMatineeCfg(int32_t iMapID, Il2CppString* strMatineeName) {
		return ((T (*)(MatineeAudioPlayer*, int32_t, Il2CppString*))(Il2CppBase() + 0x3B9A838))(this, iMapID, strMatineeName);
	}

};

}
