#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ParticleCullByUIPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ParticleCullByUIPanel"));
	}

	template <typename T = uintptr_t> T& m_panel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_renderer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCulling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetCulling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSetCulling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_SetCulling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_SetCulling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DoSetCulling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T SetCulling(uintptr_t p, Il2CppArray<uintptr_t>* rs) {
		return ((T (*)(ParticleCullByUIPanel*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3A8D2C4))(this, p, rs);
	}
	template <typename T = void> T SetCulling_1(uintptr_t p, uintptr_t r) {
		return ((T (*)(ParticleCullByUIPanel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A8D8EC))(this, p, r);
	}
	template <typename T = void> T DoSetCulling(uintptr_t r, float minX, float minY, float maxX, float maxY) {
		return ((T (*)(ParticleCullByUIPanel*, uintptr_t, float, float, float, float))(Il2CppBase() + 0x3A8D528))(this, r, minX, minY, maxX, maxY);
	}
	template <typename T = void> T SetCulling_2(uintptr_t p, Il2CppArray<uintptr_t>* rs, Il2CppString* ShderName) {
		return ((T (*)(ParticleCullByUIPanel*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x3A8DB08))(this, p, rs, ShderName);
	}
	template <typename T = void> T SetCulling_3(uintptr_t p, uintptr_t r, Il2CppString* shderName) {
		return ((T (*)(ParticleCullByUIPanel*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3A8E198))(this, p, r, shderName);
	}
	template <typename T = void> T DoSetCulling_1(uintptr_t r, float minX, float minY, float maxX, float maxY, Il2CppString* shderName) {
		return ((T (*)(ParticleCullByUIPanel*, uintptr_t, float, float, float, float, Il2CppString*))(Il2CppBase() + 0x3A8DD80))(this, r, minX, minY, maxX, maxY, shderName);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ParticleCullByUIPanel*))(Il2CppBase() + 0x3A8E3C0))(this);
	}

};

}
