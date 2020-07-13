#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetRaycastAllInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetRaycastAllInfo"));
	}

	template <typename T = uintptr_t> T& storeHitObjects() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& points() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& normals() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& distances() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetRaycastAllInfo*))(Il2CppBase() + 0x5090A34))(this);
	}
	template <typename T = void> T StoreRaycastAllInfo() {
		return ((T (*)(GetRaycastAllInfo*))(Il2CppBase() + 0x5090A4C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetRaycastAllInfo*))(Il2CppBase() + 0x5090F94))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetRaycastAllInfo*))(Il2CppBase() + 0x5090FC0))(this);
	}

};

}
