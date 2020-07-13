#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PlaySound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PlaySound"));
	}

	template <typename T = uintptr_t> T& fireClip() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NormalKill() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& HeadShotKill() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayNormalKillSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHeadShotSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T PlayFireSound() {
		return ((T (*)(PlaySound*))(Il2CppBase() + 0x1DEC1BC))(this);
	}
	template <typename T = void> T PlayNormalKillSound() {
		return ((T (*)(PlaySound*))(Il2CppBase() + 0x1DEC310))(this);
	}
	template <typename T = void> T PlayHeadShotSound() {
		return ((T (*)(PlaySound*))(Il2CppBase() + 0x1DEC464))(this);
	}

};

}
