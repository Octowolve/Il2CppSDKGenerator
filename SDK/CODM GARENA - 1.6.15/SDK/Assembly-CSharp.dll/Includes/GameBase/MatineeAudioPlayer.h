#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MatineeAudioPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MatineeAudioPlayer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& MatineeAudioConfig() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& MatineeAudioFsmEvent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& MatineeAudioFsmEndEvent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T PlaySound(uintptr_t defaultGameObject) {
		return ((T (*)(MatineeAudioPlayer*, uintptr_t))(Il2CppBase() + 0x19C35C8))(this, defaultGameObject);
	}
	template <typename T = void> T StopSound() {
		return ((T (*)(MatineeAudioPlayer*))(Il2CppBase() + 0x19C39A0))(this);
	}

};

}
