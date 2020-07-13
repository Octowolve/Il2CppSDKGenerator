#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SphereShadowCasterData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SphereShadowCasterData"));
	}

	template <typename T = int32_t> static T& perRendererCasterCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& sphCasterXStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& sphCasterYStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& sphCasterZStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& sphCasterRadiusSqrStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& sphCasterFactorAStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& sphCasterFactorBStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& sphCasterFactorCStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& FragmentHardness() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRuntimeShaderParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRuntimeParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMaterialParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> static T SetRuntimeShaderParameter(Il2CppArray<uintptr_t>* data, uintptr_t sphCasterX, uintptr_t sphCasterY, uintptr_t sphCasterZ, uintptr_t sphCasterFactorA, uintptr_t sphCasterFactorB) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42E9374))(0, data, sphCasterX, sphCasterY, sphCasterZ, sphCasterFactorA, sphCasterFactorB);
	}
	template <typename T = void> T SetRuntimeParameter(uintptr_t sphCasterX, uintptr_t sphCasterY, uintptr_t sphCasterZ, uintptr_t sphCasterFactorA, uintptr_t sphCasterFactorB) {
		return ((T (*)(SphereShadowCasterData*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42E9B64))(this, sphCasterX, sphCasterY, sphCasterZ, sphCasterFactorA, sphCasterFactorB);
	}
	template <typename T = void> T SetMaterialParameters(uintptr_t mat) {
		return ((T (*)(SphereShadowCasterData*, uintptr_t))(Il2CppBase() + 0x42E9C54))(this, mat);
	}

};

}
