#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BGMComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BGMComponent"));
	}

	template <typename T = Il2CppString*> T& BGM() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& Bank() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& InitLowerSysManually() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(BGMComponent*))(Il2CppBase() + 0x3611248))(this);
	}
	template <typename T = uintptr_t> T PlayBGM(Il2CppString* iBGMID) {
		return ((T (*)(BGMComponent*, Il2CppString*))(Il2CppBase() + 0x3611300))(this, iBGMID);
	}

};

}
