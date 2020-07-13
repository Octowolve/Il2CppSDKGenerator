#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VampireDieEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VampireDieEffect"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_VampireMatList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_PawnTrans() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_IsSpreading() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> static T& VALUE_START() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& VALUE_END() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SPREADING_INTERVAL_RATIO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LERP_PARAM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HOLE_POS_PARAM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T EndEffect() {
		return ((T (*)(VampireDieEffect*))(Il2CppBase() + 0x2E7E01C))(this);
	}
	template <typename T = void> T UpdateMaterial(float percent) {
		return ((T (*)(VampireDieEffect*, float))(Il2CppBase() + 0x2E7E270))(this, percent);
	}
	template <typename T = void> T ModifyMaterial(uintptr_t rd) {
		return ((T (*)(VampireDieEffect*, uintptr_t))(Il2CppBase() + 0x2E7E87C))(this, rd);
	}
	template <typename T = void> T xLuaBaseProxy_EndEffect() {
		return ((T (*)(VampireDieEffect*))(Il2CppBase() + 0x2E7EB20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateMaterial(float P0) {
		return ((T (*)(VampireDieEffect*, float))(Il2CppBase() + 0x2E7EB28))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ModifyMaterial(uintptr_t P0) {
		return ((T (*)(VampireDieEffect*, uintptr_t))(Il2CppBase() + 0x2E7EB30))(this, P0);
	}

};

}
