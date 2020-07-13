#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TimiAudio.Components.Teaser {

class TAPlayBGM
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TimiAudio.Components.Teaser", "TAPlayBGM"));
	}

	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& BGM() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Bank() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Bank2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CoPlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TAPlayBGM*))(Il2CppBase() + 0x466DFF4))(this);
	}
	template <typename T = uintptr_t> T CoPlaySound() {
		return ((T (*)(TAPlayBGM*))(Il2CppBase() + 0x466E0A8))(this);
	}

};

}
