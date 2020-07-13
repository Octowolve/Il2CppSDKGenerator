#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ParticleCulling
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ParticleCulling"));
	}

	template <typename T = float> T& cullingRadius() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& boundingRadius() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& effects() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_CullingGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_BoundingSphere() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectsVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ParticleCulling*))(Il2CppBase() + 0x3EFEE10))(this);
	}
	template <typename T = void> T OnStateChanged(uintptr_t sphere) {
		return ((T (*)(ParticleCulling*, uintptr_t))(Il2CppBase() + 0x3EFF2A8))(this, sphere);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ParticleCulling*))(Il2CppBase() + 0x3EFF49C))(this);
	}
	template <typename T = void> T SetEffectsVisible(bool visible) {
		return ((T (*)(ParticleCulling*, bool))(Il2CppBase() + 0x3EFF388))(this, visible);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ParticleCulling*))(Il2CppBase() + 0x3EFF5CC))(this);
	}

};

}
