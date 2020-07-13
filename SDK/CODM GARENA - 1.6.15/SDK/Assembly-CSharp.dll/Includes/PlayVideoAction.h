#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayVideoAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayVideoAction"));
	}

	template <typename T = Il2CppString*> T& videoPath() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& soundEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& soundBank() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& videoDuration() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& videoObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TogglePlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(PlayVideoAction*))(Il2CppBase() + 0x47FEA9C))(this);
	}
	template <typename T = void> T PlayVideo() {
		return ((T (*)(PlayVideoAction*))(Il2CppBase() + 0x47FEB40))(this);
	}
	template <typename T = void> T TogglePlay(bool play) {
		return ((T (*)(PlayVideoAction*, bool))(Il2CppBase() + 0x47FEFB8))(this, play);
	}
	template <typename T = uintptr_t> T Play() {
		return ((T (*)(PlayVideoAction*))(Il2CppBase() + 0x47FEED8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(PlayVideoAction*))(Il2CppBase() + 0x47FF1A8))(this);
	}

};

}
