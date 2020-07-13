#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class IceDieEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "IceDieEffect"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransferMatParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T EndEffect() {
		return ((T (*)(IceDieEffect*))(Il2CppBase() + 0x370279C))(this);
	}
	template <typename T = void> T TransferMatParameter(uintptr_t renderer, Il2CppArray<uintptr_t>* orignalMats, Il2CppArray<uintptr_t>* nowMats, uintptr_t templateMat, uintptr_t pawn, bool inheritTexture) {
		return ((T (*)(IceDieEffect*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3702910))(this, renderer, orignalMats, nowMats, templateMat, pawn, inheritTexture);
	}
	template <typename T = void> T xLuaBaseProxy_EndEffect() {
		return ((T (*)(IceDieEffect*))(Il2CppBase() + 0x3702F5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TransferMatParameter(uintptr_t P0, Il2CppArray<uintptr_t>* P1, Il2CppArray<uintptr_t>* P2, uintptr_t P3, uintptr_t P4, bool P5) {
		return ((T (*)(IceDieEffect*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3702F64))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
