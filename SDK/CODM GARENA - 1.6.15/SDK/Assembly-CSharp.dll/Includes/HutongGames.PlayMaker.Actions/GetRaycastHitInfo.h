#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetRaycastHitInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetRaycastHitInfo"));
	}

	template <typename T = uintptr_t> T& gameObjectHit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& point() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& normal() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& distance() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetRaycastHitInfo*))(Il2CppBase() + 0x5090FCC))(this);
	}
	template <typename T = void> T StoreRaycastInfo() {
		return ((T (*)(GetRaycastHitInfo*))(Il2CppBase() + 0x5090FE4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetRaycastHitInfo*))(Il2CppBase() + 0x509137C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetRaycastHitInfo*))(Il2CppBase() + 0x50913A8))(this);
	}

};

}
