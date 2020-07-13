#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetParticleCollisionInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetParticleCollisionInfo"));
	}

	template <typename T = uintptr_t> T& gameObjectHit() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetParticleCollisionInfo*))(Il2CppBase() + 0x508FB90))(this);
	}
	template <typename T = void> T StoreCollisionInfo() {
		return ((T (*)(GetParticleCollisionInfo*))(Il2CppBase() + 0x508FB9C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetParticleCollisionInfo*))(Il2CppBase() + 0x508FBE8))(this);
	}

};

}
