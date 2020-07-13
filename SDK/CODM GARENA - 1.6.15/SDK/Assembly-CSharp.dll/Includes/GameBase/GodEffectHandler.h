#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GodEffectHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GodEffectHandler"));
	}

	template <typename T = Il2CppString*> static T& kGodShaderKeywordNameOld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_DamnInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& props() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _PawnProps() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRDroppedPickUp_SetMaterialGod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pawn_SetMaterialGod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ECBCA8))(0);
	}
	template <typename T = void> static T BRDroppedPickUp_SetMaterialGod(bool enable, uintptr_t root, uintptr_t color) {
		return ((T (*)(void *, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x1ECBE04))(0, enable, root, color);
	}
	template <typename T = uintptr_t> T get_s_PawnProps() {
		return ((T (*)(GodEffectHandler*))(Il2CppBase() + 0x1ECC0B0))(this);
	}
	template <typename T = void> T Pawn_SetMaterialGod(bool enable, Il2CppList<uintptr_t>* rendererList, uintptr_t pickColor, float pickIntensity, float pickSpeed, float pickRange) {
		return ((T (*)(GodEffectHandler*, bool, Il2CppList<uintptr_t>*, uintptr_t, float, float, float))(Il2CppBase() + 0x1ECC1B4))(this, enable, rendererList, pickColor, pickIntensity, pickSpeed, pickRange);
	}

};

}
