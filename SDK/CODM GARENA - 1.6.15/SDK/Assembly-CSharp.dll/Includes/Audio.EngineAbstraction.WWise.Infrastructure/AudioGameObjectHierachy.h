#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Infrastructure {

class AudioGameObjectHierachy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Infrastructure", "AudioGameObjectHierachy"));
	}

	template <typename T = uintptr_t> T& m_RootObj() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AudioMixerObjs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_OneShotEmitter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_VBSSRoot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_DefaultAL() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(AudioGameObjectHierachy*))(Il2CppBase() + 0x44E28F0))(this);
	}
	template <typename T = void> T UnInitialize() {
		return ((T (*)(AudioGameObjectHierachy*))(Il2CppBase() + 0x4503D04))(this);
	}
	template <typename T = uintptr_t> T get_Root() {
		return ((T (*)(AudioGameObjectHierachy*))(Il2CppBase() + 0x44E1B60))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T AudioGOs() {
		return ((T (*)(AudioGameObjectHierachy*))(Il2CppBase() + 0x44E3440))(this);
	}
	template <typename T = uintptr_t> T get_OneShotEmitter() {
		return ((T (*)(AudioGameObjectHierachy*))(Il2CppBase() + 0x44E3438))(this);
	}
	template <typename T = uintptr_t> T get_VBSSRoot() {
		return ((T (*)(AudioGameObjectHierachy*))(Il2CppBase() + 0x4503D10))(this);
	}
	template <typename T = uintptr_t> T get_DefaultAL() {
		return ((T (*)(AudioGameObjectHierachy*))(Il2CppBase() + 0x44E3448))(this);
	}

};

}
