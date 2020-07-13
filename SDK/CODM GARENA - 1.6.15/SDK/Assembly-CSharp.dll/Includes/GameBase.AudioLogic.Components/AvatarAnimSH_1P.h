#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.AudioLogic.Components {

class AvatarAnimSH1P
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.AudioLogic.Components", "AvatarAnimSH_1P"));
	}

	template <typename T = char> static T& SplitCharLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAudioList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEventSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T GetAudioList() {
		return ((T (*)(AvatarAnimSH1P*))(Il2CppBase() + 0x3B970A0))(this);
	}
	template <typename T = void> T PlayEventSound(Il2CppString* soundName) {
		return ((T (*)(AvatarAnimSH1P*, Il2CppString*))(Il2CppBase() + 0x3B971D8))(this, soundName);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T xLuaBaseProxy_GetAudioList() {
		return ((T (*)(AvatarAnimSH1P*))(Il2CppBase() + 0x3B97460))(this);
	}

};

}
