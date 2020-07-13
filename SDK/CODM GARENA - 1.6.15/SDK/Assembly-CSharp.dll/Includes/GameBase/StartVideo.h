#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class StartVideo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "StartVideo"));
	}

	template <typename T = uintptr_t> T& MediaPlayer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& MediaTexture() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Adaptor() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& StartVideoName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& AudioEvent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& AudioBank() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& playImmediately() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& enableLooping() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& forceUseWWiseWhenPlayVideo() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableVideoUseWWise() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(StartVideo*))(Il2CppBase() + 0x30AD5A0))(this);
	}
	template <typename T = bool> T EnableVideoUseWWise() {
		return ((T (*)(StartVideo*))(Il2CppBase() + 0x30AD7E0))(this);
	}
	template <typename T = uintptr_t> T Play() {
		return ((T (*)(StartVideo*))(Il2CppBase() + 0x30AD700))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(StartVideo*))(Il2CppBase() + 0x30AD888))(this);
	}

};

}
